%{

/*
 * $Id$
 * Copyright (C) 2007, The Perl Foundation.
 */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include "macroparser.h"
#include "macro.h"

/* prevent inclusion of <unistd.h> on windows */
#define YY_NO_UNISTD_H

/* declare yylex prototype BEFORE inclusion of lexer header file. */
#define YY_DECL int macrolex(YYSTYPE *yylval, yyscan_t yyscanner)

/* inlude flex-generated lexer header file. */
#include "macrolexer.h"

/* declare yylex. */
extern YY_DECL;

/* declare yyerror */
extern int yyerror(yyscan_t yyscanner, char *message);

#define YYDEBUG         1




/* globals! */
constant_table *globaldefinitions;
static int errors    = 0;
static int flexdebug = 0;


static void  process_file(char *filename);
static void  process_string(char *buffer);
static void  include_file(char *filename);
static void  expand(macro_def *macro, list *args);
static void  define_constant(constant_table *table, char *name, char *value);
static void  define_macro(constant_table *table, char *name, list *parameters, char *body);
static void  emit(char *str);
static list *new_list(char *first_item);
static list *add_item(list *L, char *item);

static constant_table *new_constant_table(constant_table *current);
static constant_table *pop_constant_table(void);
static void delete_constant_table(constant_table *table);

macro_def *find_macro(constant_table *table, char *name);
char *concat(char *str1, char *str2);
%}

%union {
    char  *sval;
    int    ival;
    double nval;
    char   cval;
    struct list *lval;
    struct macro_def *mval;

}


%token TK_MACRO             ".macro"
       TK_NL                "\n"
       TK_ENDM              ".endm"
       TK_INCLUDE           ".include"
       TK_MACRO_CONST       ".macro_const"
       TK_LINE              ".line"

%token <sval> TK_IDENT      "identifier"
       <sval> TK_ANY        "any token"
       <sval> TK_BODY       "macro body"
       <mval> TK_DOT_IDENT  ".identifier"

%token <sval> TK_STRINGC    "string constant"
       <sval> TK_NUMC       "number constant"
       <sval> TK_INTC       "integer constant"

%type <sval> expression macro_body opt_macro_body arg
%type <lval> arguments opt_arg_list arg_list parameters opt_param_list param_list




/* generated parser is in "macroparser.c" */
%output="macroparser.c"

/* replace Bison' standard prefix "yy" by "macro" */
%name-prefix="macro"

/* for more helpful error messages */
%error-verbose

/* declare parameters to move around */
%parse-param {yyscan_t yyscanner}
%lex-param   {yyscan_t yyscanner}


%pure-parser

%start program

%%


program:
       | opt_nl statements opt_nl
       ;

opt_nl: /* empty */
      | TK_NL
      ;

statements: statement
          | statements newline
            statement
          ;

newline: "\n"
       { /* after each statement, emit a newline */
         emit("\n");
       }
       ;

/* handle macro definitions, expansions, include statements
 * and constant definitions. Anything else is skipped.
 */
statement: macro_definition
         | include_statement
         | macro_const_definition
         | line_directive
         | anything
         ;

line_directive: ".line" TK_INTC  { emit("setline"); emit($2); }
              ;

/* skip any thing else */
anything: any
        | anything any
        ;

any: TK_ANY                          { emit($1); }
   | TK_DOT_IDENT arguments          { expand($1, $2); }
   ;


include_statement: ".include" TK_STRINGC         { include_file($2); }
                 ;

macro_const_definition: ".macro_const" TK_IDENT expression
	                  { define_constant(globaldefinitions, $2, $3); }
                      ;



macro_definition: ".macro" TK_IDENT parameters "\n"
                  opt_macro_body
                  ".endm"
                { define_macro(globaldefinitions, $2, $3, $5); }
                ;

opt_macro_body: /* empty, make sure the macro body is a valid string. */ { $$ = ""; }
              | macro_body  { $$ = $1;   }
              ;

macro_body: TK_ANY               { $$ = $1; }
          | macro_body TK_ANY    { $$ = concat($1, $2); }
          ;

parameters: /* empty */            { $$ = NULL; }
          | '(' opt_param_list ')' { $$ = $2;   }
          ;

opt_param_list: /* empty */   { $$ = NULL; }
              | param_list    { $$ = $1;   }
              ;

param_list: TK_IDENT                  { $$ = new_list($1); }
          | param_list ',' TK_IDENT   { $$ = add_item($1, $3); }
          ;

arguments: /* empty */              { $$ = NULL; }
         | '(' opt_arg_list ')'     { $$ = $2;   }
         ;

opt_arg_list: /* empty */  { $$ = NULL; }
            | arg_list     { $$ = $1;   }
            ;

arg_list: arg               { $$ = new_list($1); }
        | arg_list ',' arg  { $$ = add_item($1, $3); }
        ;

arg: expression
   ;

/* all types of expressions can probably be handled as a more generic token, such as "TK_EXPR"
 * we don't care if it's a string or a number; it's just text replacing. */
expression: TK_IDENT
          | TK_NUMC
          | TK_INTC
          | TK_STRINGC
          ;



%%


/*

=head1 Functions

=over 4

=item C<new_list>

Create a new list node. The specified item is assigned to the node's value.
Returns the newly created node.

=cut

*/
static list *
new_list(char *first_item) {
    list *L = (list *)malloc(sizeof (list));
    assert(L != NULL);
    memset(L, 0, sizeof (list));
    L->item = first_item;
    return L;
}

/*

=item C<add_item>

Add a new item to the specified list. The item is added
at the back of the list, so items added are kept in order.

=cut

*/
static list *
add_item(list *L, char *item) {
    list *iter = L;
    assert(iter != NULL);

    while (iter->next != NULL) {
        iter = iter->next;
    }

    assert(iter != NULL);
    iter->next = new_list(item);

    return L;
}

/*

=item C<include_file>

Process the specified file.


=cut

*/
static void
include_file(char *filename) {
    assert(filename != NULL);
    fprintf(stderr, "including: %s\n", filename);
    /* remove closing quote */
    filename[strlen(filename) - 1] = '\0';
    /* give address of string, skipping opening quote */
    process_file(filename + 1);
}

/*

=item C<expand>

Expand the specified macro (or constant).

=cut

*/
static void
expand(macro_def *macro, list *args) {
	/* construct a map data structure that maps the argument values to the parameter names */
	/* enter the parameters as temporary symbols (.macro_const) */
	constant_table *macro_params = new_constant_table(globaldefinitions);
	list *params = macro->parameters;

	while (params && args) {
		define_constant(macro_params, params->item, args->item);
		params = params->next;
		args   = args->next;
	}

	if (params != NULL) { /* args must be null, so too few arguments */
		fprintf(stderr, "Too few arguments for macro expansion.\n");
	}
	if (args != NULL) { /* params must be null, so too many arguments */
		fprintf(stderr, "Too many arguments for macro expansion.\n");
	}

    process_string(macro->body);

    /*
    fprintf(stderr, "macro %s expanded\n", macro->name);
    */

    /* now remove the temporary constant definitions */

    pop_constant_table();

	delete_constant_table(macro_params);

}

/*

=item C<define_constant>

Define the specified name as an alias for the specified value.

=cut

*/
static void
define_constant(constant_table *table, char *name, char *value) {
    macro_def *def = (macro_def *)malloc(sizeof (macro_def));
    assert(def != NULL);
    memset(def, 0, sizeof (macro_def));

    def->name = name;
    def->body = value;

    def->next = table->definitions;
    table->definitions = def;
}

/*

=item C<define_macro>

Define a macro by the given name, parameters and body.

=cut

*/
static void
define_macro(constant_table *table, char *name, list *parameters, char *body) {
    macro_def *macro = (macro_def *)malloc(sizeof (macro_def));
    assert(macro != NULL);
    memset(macro, 0, sizeof (macro_def));

    /* initialize the fields */
    macro->name = name;
    macro->body = body;
    macro->parameters = parameters;

    /* link the macro in the list */
    macro->next = table->definitions;
    table->definitions = macro;
}


/*

=item C<find_macro>

Find the specified macro. If the specified macro does not exist,
NULL is returned.

=cut

*/
macro_def *
find_macro(constant_table *table, char *name) {
    macro_def *iter = table->definitions;
    assert(name != NULL);

    /* iterate over the list and compare each node's name */
    while (iter != NULL) {
        if (strcmp(iter->name, name) == 0)
            return iter;
        iter = iter->next;
    }

    if (table->prev)
    	return find_macro(table->prev, name);

    return NULL;
}

/*

=item C<concat>

Concatenate two strings, and return the result. If the first string is NULL, then
the result consists of the second string.

=cut

*/
char *
concat(char *str1, char *str2) {
    assert (str2 != NULL);
    if (str1 == NULL) {
        return str2;
    }
    else {
        /* allocate a new buffer large enough to hold both strings, a space, and the NULL char. */
        /* TODO: make this more efficient; don't malloc every time, just allocate a big enough
         * buffer, and only increase it if it's full. For now this is the easiest solution.
         */
        int   strlen1   = strlen(str1);
        char *newbuffer = (char *)calloc(strlen1 + strlen(str2) + 1 + 1, sizeof (char));

        assert(newbuffer != NULL);
        sprintf(newbuffer, "%s %s", str1, str2);

        /*
        free(str1);
        free(str2);
        */
        return newbuffer;
    }
}

/* short-cut to check for a label; last character must be ":" */
#define is_label(X)     (X[strlen(X) - 1] == ':')

/* short-cut to check for token equality */
#define is_token(X,Y)   (strcmp(X,Y) == 0)


/*

=item C<emit>

Emit the specified string. This function will be the "gateway" to the
output file. All tokens except C<.sub>, C<.end> and C<.namespace> are indented.
All tokens are separated with a space,  C<)>, C<]>, C<,>.

=cut

*/
static void
emit(char *str) {
    FILE *output = stdout;
    /* globals! */
    static int just_nl    = 1;
    static int need_space = 1;

    /* emit a newline between .subs and .namespaces */
    if (is_token(str, ".sub") || is_token(str, ".namespace"))
        fprintf(output, "\n");

    /* if the token needs indention, all except .sub, .end and .namespace. */
    if (!is_token(str, ".sub") && !is_token(str, ".end") && !is_token(str, ".namespace")) {
        if (just_nl) { /* just a newline means we need some indention */
            if (is_label(str)) { /* indent labels a bit less than other tokens */
                fprintf(output, "  ");
            }
            else { /* not a label */
                fprintf(output, "    ");
            }
        }
    }
    /* print the token; if it's a token like a comma, that shouldn't be prefixed with space,
     * remove the space (backspace)
     */
    /*
    if (is_token(str, ",") || is_token(str, ")") || is_token(str, "]")) {
        fprintf(output, "%c", '\b');
    }
    */

    if (is_token(str, "(") || is_token(str, "[")) {
        need_space = 0; /* no separation needed after these tokens */
    }
    else { /* all normal cases emit a separation space for tokens */
        need_space = 1;
    }
    /* print the token */
    fprintf(output, "%s", str);
    /* check for newline */
    if (is_token(str, "\n"))
        just_nl = 1;
    else {
        just_nl = 0;
        if (need_space)
            fprintf(output, " ");
    }

}

/*

=item C<new_constant_table>

=cut

*/
static constant_table *
new_constant_table(constant_table *current) {
	constant_table *table = (constant_table *)malloc(sizeof (constant_table));
	assert(table != NULL);
	table->definitions = NULL;
	table->prev = current;

	globaldefinitions = table;
	return table;
}


/*

=item C<pop_constant_table>

=cut

*/
static constant_table *
pop_constant_table(void) {
	constant_table *popped = globaldefinitions;
	globaldefinitions = popped->prev;
	return popped;
}

/*

=item C<delete_constant_table>

=cut

*/
static void
delete_constant_table(constant_table *table) {
	/* destroy all definitions */
	macro_def *iter = table->definitions;
	while (iter != NULL) {
		macro_def *temp = iter;
		iter = iter->next;
		free(temp);
	}
	free(table);
}

/*

=item C<process_string>

Process the string stored in C<buffer>. First a new yyscan_t
object is created, initialized, after which the specified
buffer is parsed. Afterwards the yyscan_t object is destroyed.

=cut

*/
void
process_string(char *buffer) {
    /* initialize a yyscan_t object */
    yyscan_t yyscanner;
    macrolex_init(&yyscanner);
    macroset_debug(flexdebug, yyscanner);
    assert(buffer != NULL);
    /* set the scanner to a string buffer and go parse */
    macro_scan_string(buffer, yyscanner);
    yyparse(yyscanner);
    /* clean up after playing */
    macrolex_destroy(yyscanner);

}

/*

=item C<process_file>

Process the specified file.

=cut

*/
void
process_file(char *filename) {
    FILE *fp = NULL;
    yyscan_t yyscanner;

    assert(filename != NULL);
    fp = fopen(filename, "r");

    if (fp == NULL) {
        /* wrap the filename in quotes again */
        char *buff = (char *)calloc(strlen(filename) + 3, sizeof (char));
        assert(buff != NULL);
        sprintf(buff, "'%s'", filename);
        fprintf(stderr, "Failed to open file %s\n", filename);
        emit(".include");
        emit(buff);
        free(buff);
    }
    else {
        /* construct a yylex_t object */
        macrolex_init(&yyscanner);
        macroset_in(fp, yyscanner);
        macroset_debug(flexdebug, yyscanner);
        /* go parse the file */
        yyparse(yyscanner);
        /* and clean up */
        macrolex_destroy(yyscanner);
    }
}

/*

=item C<yyerror>

Function for syntax error handling.

=cut

*/
int
yyerror(yyscan_t yyscanner, char *message) {
    extern int line;

    /* this needs to be stored in a structure representing the current file or macro. */

    fprintf(stderr, "yyerror: %s\n", message);
    fprintf(stderr, "token: '%s'\n", macroget_text(yyscanner));
    fprintf(stderr, "Line: %d\n", line);
    errors++;
    return 0;
}


/*

=item C<main>

Pre-processor main function.

=cut

*/
int
main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <files>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    /* skip program name */
    argc--;
    argv++;

        /* very basic argument handling; I'm too lazy to check out
     * the standard funtion for that, right now. This is a TODO. */
    while (argc > 0 && argv[0][0] == '-') {
        switch (argv[0][1]) {
            /* Only allow for debug flag if the generated parser supports it */
#ifdef YYDEBUG
            case 'd':
                yydebug = 1;
                break;
#endif
            case 'f':
                flexdebug = 1;
                break;
            case 'h':
                /* */
                exit(EXIT_SUCCESS); /* asking for help doesn't make you a failure */
                /* break; */
            default:
                fprintf(stderr, "Unknown option: '%c'\n", argv[0][1]);
                break;
        }
        /* goto next command line argument */
        argv++;
        argc--;
    }

	/* set up the global constant table */
	globaldefinitions = new_constant_table(NULL);

    /* process all files specified on the command line */
    while (argc > 0) {
        process_file(argv[0]);

        argc--;
        argv++;
    }
    if (errors > 0)
        fprintf(stderr, "There were %d error(s)\n", errors);
        

    return 0;
}


/*

=back

=cut

*/


/*
 * Local variables:
 *   c-file-style: "parrot"
 * End:
 * vim: expandtab shiftwidth=4:
 */
