/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse yypirparse
#define yylex   yypirlex
#define yyerror yypirerror
#define yylval  yypirlval
#define yychar  yypirchar
#define yydebug yypirdebug
#define yynerrs yypirnerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TK_HLL = 258,
     TK_HLL_MAP = 259,
     TK_LOADLIB = 260,
     TK_SUB = 261,
     TK_END = 262,
     TK_PARAM = 263,
     TK_LEX = 264,
     TK_LINE = 265,
     TK_FILE = 266,
     TK_LOCAL = 267,
     TK_NAMESPACE = 268,
     TK_INVOCANT = 269,
     TK_METH_CALL = 270,
     TK_GLOBALCONST = 271,
     TK_CONST = 272,
     TK_RETURN = 273,
     TK_YIELD = 274,
     TK_SET_YIELD = 275,
     TK_SET_RETURN = 276,
     TK_BEGIN_YIELD = 277,
     TK_END_YIELD = 278,
     TK_BEGIN_RETURN = 279,
     TK_END_RETURN = 280,
     TK_BEGIN_CALL = 281,
     TK_END_CALL = 282,
     TK_GET_RESULTS = 283,
     TK_CALL = 284,
     TK_SET_ARG = 285,
     TK_GET_RESULT = 286,
     TK_NCI_CALL = 287,
     TK_TAILCALL = 288,
     TK_ANNOTATE = 289,
     TK_NL = 290,
     TK_LABEL = 291,
     TK_IDENT = 292,
     TK_INT = 293,
     TK_NUM = 294,
     TK_PMC = 295,
     TK_STRING = 296,
     TK_IF = 297,
     TK_UNLESS = 298,
     TK_NULL = 299,
     TK_GOTO = 300,
     TK_STRINGC = 301,
     TK_INTC = 302,
     TK_NUMC = 303,
     TK_PREG = 304,
     TK_NREG = 305,
     TK_SREG = 306,
     TK_IREG = 307,
     TK_CONST_VALUE = 308,
     TK_ARROW = 309,
     TK_NE = 310,
     TK_EQ = 311,
     TK_LT = 312,
     TK_LE = 313,
     TK_GT = 314,
     TK_GE = 315,
     TK_USHIFT = 316,
     TK_RSHIFT = 317,
     TK_LSHIFT = 318,
     TK_FDIV = 319,
     TK_OR = 320,
     TK_AND = 321,
     TK_XOR = 322,
     TK_CONC = 323,
     TK_ASSIGN_USHIFT = 324,
     TK_ASSIGN_RSHIFT = 325,
     TK_ASSIGN_LSHIFT = 326,
     TK_ASSIGN_INC = 327,
     TK_ASSIGN_DEC = 328,
     TK_ASSIGN_MUL = 329,
     TK_ASSIGN_MOD = 330,
     TK_ASSIGN_POW = 331,
     TK_ASSIGN_DIV = 332,
     TK_ASSIGN_BOR = 333,
     TK_ASSIGN_BAND = 334,
     TK_ASSIGN_FDIV = 335,
     TK_ASSIGN_BNOT = 336,
     TK_ASSIGN_CONC = 337,
     TK_FLAG_INIT = 338,
     TK_FLAG_LOAD = 339,
     TK_FLAG_MAIN = 340,
     TK_FLAG_ANON = 341,
     TK_FLAG_METHOD = 342,
     TK_FLAG_OUTER = 343,
     TK_FLAG_VTABLE = 344,
     TK_FLAG_LEX = 345,
     TK_FLAG_MULTI = 346,
     TK_FLAG_POSTCOMP = 347,
     TK_FLAG_IMMEDIATE = 348,
     TK_FLAG_SUBID = 349,
     TK_FLAG_INSTANCEOF = 350,
     TK_FLAG_NSENTRY = 351,
     TK_FLAG_UNIQUE_REG = 352,
     TK_FLAG_NAMED = 353,
     TK_FLAG_SLURPY = 354,
     TK_FLAG_FLAT = 355,
     TK_FLAG_OPTIONAL = 356,
     TK_FLAG_OPT_FLAG = 357,
     TK_FLAG_INVOCANT = 358,
     TK_MACRO = 359,
     TK_ENDM = 360,
     TK_MACRO_LOCAL = 361,
     TK_MACRO_LABEL = 362,
     TK_MACRO_CONST = 363,
     TK_MACRO_LABEL_ID = 364,
     TK_MACRO_LOCAL_ID = 365,
     TK_MACRO_IDENT = 366,
     TK_MACRO_ARG_IDENT = 367,
     TK_MACRO_ARG_OTHER = 368,
     TK_MACRO_CONST_VAL = 369,
     TK_PASM_MARKER_START = 370,
     TK_PIR_MARKER_START = 371,
     TK_PCC_SUB = 372,
     TK_PARROT_OP = 373
   };
#endif
/* Tokens.  */
#define TK_HLL 258
#define TK_HLL_MAP 259
#define TK_LOADLIB 260
#define TK_SUB 261
#define TK_END 262
#define TK_PARAM 263
#define TK_LEX 264
#define TK_LINE 265
#define TK_FILE 266
#define TK_LOCAL 267
#define TK_NAMESPACE 268
#define TK_INVOCANT 269
#define TK_METH_CALL 270
#define TK_GLOBALCONST 271
#define TK_CONST 272
#define TK_RETURN 273
#define TK_YIELD 274
#define TK_SET_YIELD 275
#define TK_SET_RETURN 276
#define TK_BEGIN_YIELD 277
#define TK_END_YIELD 278
#define TK_BEGIN_RETURN 279
#define TK_END_RETURN 280
#define TK_BEGIN_CALL 281
#define TK_END_CALL 282
#define TK_GET_RESULTS 283
#define TK_CALL 284
#define TK_SET_ARG 285
#define TK_GET_RESULT 286
#define TK_NCI_CALL 287
#define TK_TAILCALL 288
#define TK_ANNOTATE 289
#define TK_NL 290
#define TK_LABEL 291
#define TK_IDENT 292
#define TK_INT 293
#define TK_NUM 294
#define TK_PMC 295
#define TK_STRING 296
#define TK_IF 297
#define TK_UNLESS 298
#define TK_NULL 299
#define TK_GOTO 300
#define TK_STRINGC 301
#define TK_INTC 302
#define TK_NUMC 303
#define TK_PREG 304
#define TK_NREG 305
#define TK_SREG 306
#define TK_IREG 307
#define TK_CONST_VALUE 308
#define TK_ARROW 309
#define TK_NE 310
#define TK_EQ 311
#define TK_LT 312
#define TK_LE 313
#define TK_GT 314
#define TK_GE 315
#define TK_USHIFT 316
#define TK_RSHIFT 317
#define TK_LSHIFT 318
#define TK_FDIV 319
#define TK_OR 320
#define TK_AND 321
#define TK_XOR 322
#define TK_CONC 323
#define TK_ASSIGN_USHIFT 324
#define TK_ASSIGN_RSHIFT 325
#define TK_ASSIGN_LSHIFT 326
#define TK_ASSIGN_INC 327
#define TK_ASSIGN_DEC 328
#define TK_ASSIGN_MUL 329
#define TK_ASSIGN_MOD 330
#define TK_ASSIGN_POW 331
#define TK_ASSIGN_DIV 332
#define TK_ASSIGN_BOR 333
#define TK_ASSIGN_BAND 334
#define TK_ASSIGN_FDIV 335
#define TK_ASSIGN_BNOT 336
#define TK_ASSIGN_CONC 337
#define TK_FLAG_INIT 338
#define TK_FLAG_LOAD 339
#define TK_FLAG_MAIN 340
#define TK_FLAG_ANON 341
#define TK_FLAG_METHOD 342
#define TK_FLAG_OUTER 343
#define TK_FLAG_VTABLE 344
#define TK_FLAG_LEX 345
#define TK_FLAG_MULTI 346
#define TK_FLAG_POSTCOMP 347
#define TK_FLAG_IMMEDIATE 348
#define TK_FLAG_SUBID 349
#define TK_FLAG_INSTANCEOF 350
#define TK_FLAG_NSENTRY 351
#define TK_FLAG_UNIQUE_REG 352
#define TK_FLAG_NAMED 353
#define TK_FLAG_SLURPY 354
#define TK_FLAG_FLAT 355
#define TK_FLAG_OPTIONAL 356
#define TK_FLAG_OPT_FLAG 357
#define TK_FLAG_INVOCANT 358
#define TK_MACRO 359
#define TK_ENDM 360
#define TK_MACRO_LOCAL 361
#define TK_MACRO_LABEL 362
#define TK_MACRO_CONST 363
#define TK_MACRO_LABEL_ID 364
#define TK_MACRO_LOCAL_ID 365
#define TK_MACRO_IDENT 366
#define TK_MACRO_ARG_IDENT 367
#define TK_MACRO_ARG_OTHER 368
#define TK_MACRO_CONST_VAL 369
#define TK_PASM_MARKER_START 370
#define TK_PIR_MARKER_START 371
#define TK_PCC_SUB 372
#define TK_PARROT_OP 373




/* Copy the first part of user declarations.  */
#line 1 "pir.y"


/*
 * $Id$
 * Copyright (C) 2007-2008, The Perl Foundation.
 */

/*

=head1 NAME

pir.y - Bison specification for the PIR assembly language parser.

=head1 DESCRIPTION

This file implements the parser for the PIR assembly language. During the
parsing phase, data structures are created that represent the input. These
data structures are defined in C<pircompunit.h>.

The parser implements strength reduction and constant folding. Strength
reduction refers to the selection of instructions that have the same
effect as the instruction written by the PIR programmer, but are more
efficient. For instance:

 add $P0, $P0, $P1

can be reduced to:

 add $P0, $P1

as C<$P0> was an IN/OUT operand.

Constant folding refers to the compile-time evaluation of expressions,
if possible. For instance:

 add $I0, 10, 20

can be written as:

 set $I0, 30

as we can evaluate this result during compile time. Likewise, conditional
branch instructions may become unconditional branch instructions (if the
condition evaluates to I<true> during compile time) or it may become a C<noop>
(no op) instruction (if the condition evaluates to I<false> during compile time).

=cut

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "parrot/oplib/ops.h"

#include "pircompiler.h"
#include "pircompunit.h"
#include "pirsymbol.h"
#include "piryy.h"
#include "pirmacro.h"
#include "pirpcc.h"
#include "pirerr.h"

/* #defines to prevent declarations of malloc() and free() in pirparser.h */
#define YYMALLOC
#define YYFREE
#include "pirparser.h"

/* #define to prevent declaration of yypirlex() in pirlexer.h */
#define YY_DECL
#include "pirlexer.h"

int yypirlex(YYSTYPE *yylval, yyscan_t yyscanner);

#ifdef _WIN32
/* prevent warnings about unreachable code. */
#  pragma warning (disable:4702)
/* prevent warnings about possible loss of data. */
#  pragma warning (disable:4244)
/* prevent warnings about uninitialized yylval object. */
#  pragma warning (disable:4701)

#else


#endif

char *expand_macro(yyscan_t yyscanner, macro_def * const macro, macro_param * args);

/* Enumeration of mathematical operator types; these are used to index the opnames array. */
typedef enum pir_math_operators {
    OP_ADD = 0, /* make sure counting starts at 0 */
    OP_INC,     /* special case for OP_ADD; must be 1 position after OP_ADD */
    OP_SUB,
    OP_DEC,     /* special case for OP_DEC; must be 1 position after OP_SUB */
    OP_DIV,
    OP_MUL,
    OP_MOD,
    OP_BOR,
    OP_BAND,
    OP_BXOR,
    OP_POW,
    OP_CONCAT,
    OP_LSR,
    OP_SHR,
    OP_SHL,
    OP_OR,
    OP_AND,
    OP_FDIV,
    OP_XOR,
    OP_ISEQ,
    OP_ISLE,
    OP_ISLT,
    OP_ISGE,
    OP_ISGT,
    OP_ISNE

} pir_math_operator;

/* relational operator types */
typedef enum pir_rel_operators {
    OP_NE = OP_ISNE + 1,   /* continue after OP_ISNE in pir_math_operator. */
    OP_EQ,
    OP_GT,
    OP_LT,
    OP_GE,
    OP_LE

} pir_rel_operator;

/* names of the binary operators */
static char const * const opnames[] = {
    "add",
    "inc", /* use this when "add"ing 1 */
    "sub",
    "dec", /* use this when "sub"ing 1 */
    "div",
    "mul",
    "mod",
    "bor",
    "band",
    "bxor",
    "pow",
    "concat",
    "lsr",
    "shr",
    "shl",
    "or",
    "and",
    "fdiv",
    "xor",
    "iseq",
    "isle",
    "islt",
    "isge",
    "isgt",
    "isne",
    /* note that from here on it's rel. ops; see pir_rel_operator enumeration */
    "ne",
    "eq",
    "gt", /* 1 position before "lt" */
    "lt",
    "ge", /* 1 position before "le" */
    "le"
};

/* prototypes for constant folding and compile-time evaluation functions */
static constant *fold_i_i(yyscan_t yyscanner, int a, pir_math_operator op, int b);
static constant *fold_n_i(yyscan_t yyscanner, double a, pir_math_operator op, int b);
static constant *fold_i_n(yyscan_t yyscanner, int a, pir_math_operator op, double b);
static constant *fold_n_n(yyscan_t yyscanner, double a, pir_math_operator op, double b);
static constant *fold_s_s(yyscan_t yyscanner, char const *a, pir_math_operator op, char const *b);

static int evaluate_i_i(int a, pir_rel_operator op, int b);
static int evaluate_n_n(double a, pir_rel_operator op, double b);
static int evaluate_i_n(int a, pir_rel_operator op, double b);
static int evaluate_n_i(double a, pir_rel_operator op, int b);
static int evaluate_s_s(char const * const a, pir_rel_operator op, char const * const b);

static int evaluate_s(char * const s);
static int evaluate_c(lexer_state * const lexer, constant * const c);

static char *concat_strings(lexer_state * const lexer, char const * a, char const * b);

static void create_if_instr(yyscan_t yyscanner, lexer_state * const lexer, int invert,
                            int hasnull, char const * const name, char const * const label);

static void do_strength_reduction(yyscan_t yyscanner);
static int check_value(constant * const c, int val);

static void check_first_arg_direction(yyscan_t yyscanner, char const * const opname);

static int check_op_args_for_symbols(yyscan_t yyscanner);
static int get_opinfo(yyscan_t yyscanner);

static void undeclared_symbol(yyscan_t yyscanner, lexer_state * const lexer,
                              char const * const symbol);

/* names of the Parrot types. Note that pir_type_names is (file-)global,
 * but it's read-only, so that's fine.
 */
static char const * const pir_type_names[] = { "int", "string", "pmc", "num" };


/* enable debugging of generated parser */
#define YYDEBUG         1

/* enable slightly more helpful error messages */
#define YYERROR_VERBOSE 1

#ifndef YYENABLE_NLS
#  define YYENABLE_NLS 0
#endif

#ifndef YYLTYPE_IS_TRIVIAL
#  define YYLTYPE_IS_TRIVIAL 0
#endif


/* the parser aborts if there are more than 10 errors */
#define MAX_NUM_ERRORS          10

#define COMPUTE_DURING_RUNTIME  -1

#define DONT_INVERT_OPNAME      0

#define NEED_INVERT_OPNAME      1



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 236 "pir.y"
{
    double              dval;
    int                 ival;
    unsigned            uval;
    char   const       *sval;
    struct constant    *cval;
    struct instruction *instr;
    struct expression  *expr;
    struct target      *targ;
    struct argument    *argm;
    struct invocation  *invo;
    struct key         *key;
    struct symbol      *symb;
    struct macro_def   *mval;
    struct macro_param *pval;
}
/* Line 187 of yacc.c.  */
#line 589 "pirparser.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 602 "pirparser.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1050

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  139
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  166
/* YYNRULES -- Number of rules.  */
#define YYNRULES  422
/* YYNRULES -- Number of states.  */
#define YYNSTATES  659

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   374

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   130,     2,     2,     2,   135,   137,     2,
     119,   120,   134,   132,   121,   129,   128,   133,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   125,
       2,   122,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   123,     2,   124,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   126,   136,   127,   131,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   138
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    13,    14,    16,    18,    22,
      24,    26,    28,    30,    32,    34,    36,    38,    40,    42,
      44,    48,    56,    59,    60,    62,    64,    68,    70,    71,
      73,    75,    78,    81,    83,    85,    88,    92,    95,    98,
     101,   106,   109,   114,   119,   120,   122,   124,   128,   130,
     137,   139,   142,   144,   146,   147,   150,   152,   154,   156,
     158,   160,   162,   164,   167,   172,   175,   178,   181,   184,
     187,   191,   192,   194,   196,   200,   202,   204,   206,   208,
     209,   212,   217,   220,   221,   224,   226,   228,   230,   235,
     237,   238,   241,   244,   246,   248,   250,   252,   254,   256,
     258,   260,   262,   264,   266,   268,   270,   272,   274,   276,
     278,   282,   283,   287,   288,   290,   292,   296,   298,   300,
     303,   305,   309,   310,   313,   315,   317,   319,   322,   324,
     327,   330,   334,   338,   341,   344,   346,   348,   350,   352,
     353,   355,   357,   361,   365,   367,   369,   371,   373,   375,
     377,   380,   384,   386,   390,   397,   402,   409,   412,   414,
     416,   420,   424,   428,   432,   436,   440,   445,   450,   455,
     459,   463,   467,   471,   475,   479,   483,   488,   494,   499,
     504,   508,   512,   516,   520,   524,   528,   532,   536,   539,
     545,   551,   557,   563,   569,   575,   581,   587,   593,   598,
     604,   609,   614,   619,   624,   629,   634,   639,   644,   649,
     654,   659,   664,   669,   673,   677,   681,   685,   689,   693,
     697,   701,   705,   709,   713,   717,   719,   721,   723,   725,
     727,   729,   733,   738,   740,   744,   747,   748,   750,   756,
     758,   760,   762,   771,   772,   774,   776,   779,   783,   787,
     790,   796,   797,   800,   801,   803,   805,   808,   812,   814,
     817,   821,   825,   827,   829,   831,   836,   839,   841,   843,
     845,   847,   849,   851,   853,   855,   859,   860,   862,   864,
     868,   871,   875,   876,   879,   881,   883,   885,   888,   890,
     892,   894,   896,   898,   902,   906,   910,   914,   915,   917,
     919,   923,   925,   927,   931,   934,   936,   942,   948,   949,
     951,   953,   956,   960,   961,   963,   965,   968,   972,   973,
     976,   978,   981,   982,   984,   988,   991,   993,   995,   998,
    1001,  1006,  1011,  1016,  1021,  1023,  1025,  1027,  1029,  1031,
    1033,  1035,  1037,  1039,  1041,  1043,  1045,  1047,  1049,  1051,
    1053,  1055,  1057,  1059,  1061,  1063,  1065,  1067,  1069,  1071,
    1073,  1075,  1077,  1079,  1081,  1083,  1085,  1087,  1089,  1091,
    1093,  1095,  1097,  1099,  1101,  1103,  1105,  1107,  1109,  1111,
    1113,  1115,  1117,  1119,  1121,  1123,  1125,  1127,  1129,  1131,
    1133,  1135,  1137,  1139,  1141,  1143,  1145,  1147,  1149,  1151,
    1153,  1155,  1157,  1159,  1161,  1163,  1166,  1168,  1170,  1173,
    1175,  1178,  1180,  1183,  1186,  1188,  1191,  1194,  1196,  1198,
    1200,  1204,  1206
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     140,     0,    -1,   116,   141,    -1,   115,   296,    -1,   142,
     143,   142,    -1,    -1,    35,    -1,   144,    -1,   143,    35,
     144,    -1,   167,    -1,   281,    -1,   163,    -1,   161,    -1,
     162,    -1,   158,    -1,   159,    -1,   160,    -1,   145,    -1,
     146,    -1,   147,    -1,   108,    37,   114,    -1,   148,   119,
     149,   120,    35,   152,   105,    -1,   104,   291,    -1,    -1,
     150,    -1,   151,    -1,   150,   121,   151,    -1,   291,    -1,
      -1,   153,    -1,   154,    -1,   153,   154,    -1,   155,    35,
      -1,   156,    -1,   157,    -1,   107,   109,    -1,   106,   287,
     110,    -1,     5,    46,    -1,    10,    47,    -1,    11,    46,
      -1,    34,    46,   121,    46,    -1,     3,    46,    -1,     4,
      46,   122,    46,    -1,    13,   123,   164,   124,    -1,    -1,
     165,    -1,   166,    -1,   165,   125,   166,    -1,    46,    -1,
     169,   171,    35,   177,   185,   168,    -1,     7,    -1,     6,
     170,    -1,   291,    -1,    46,    -1,    -1,   171,   172,    -1,
      86,    -1,    83,    -1,    84,    -1,    85,    -1,    90,    -1,
      92,    -1,    93,    -1,    91,   173,    -1,    88,   119,   170,
     120,    -1,    87,   277,    -1,    89,   277,    -1,    94,   278,
      -1,    95,   278,    -1,    96,   278,    -1,   119,   174,   120,
      -1,    -1,   175,    -1,   176,    -1,   175,   121,   176,    -1,
     291,    -1,    46,    -1,   212,    -1,   178,    -1,    -1,   178,
     179,    -1,     8,   180,   181,    35,    -1,   287,   291,    -1,
      -1,   181,   182,    -1,   255,    -1,   183,    -1,   184,    -1,
     103,   119,   176,   120,    -1,    97,    -1,    -1,   185,   186,
      -1,    36,   187,    -1,   187,    -1,   202,    -1,   219,    -1,
     225,    -1,   226,    -1,   230,    -1,   279,    -1,   256,    -1,
     231,    -1,   215,    -1,   201,    -1,   200,    -1,   197,    -1,
     198,    -1,   188,    -1,   199,    -1,   189,    -1,   111,   190,
      35,    -1,    -1,   119,   191,   120,    -1,    -1,   192,    -1,
     193,    -1,   192,   121,   193,    -1,   112,    -1,   113,    -1,
     111,   190,    -1,   194,    -1,   126,   195,   127,    -1,    -1,
     195,   196,    -1,    35,    -1,   113,    -1,   112,    -1,   111,
     190,    -1,    35,    -1,   159,    35,    -1,     1,    35,    -1,
      44,   288,    35,    -1,    28,   250,    35,    -1,   203,    35,
      -1,   204,   205,    -1,   214,    -1,    37,    -1,   206,    -1,
     208,    -1,    -1,   207,    -1,   209,    -1,   207,   121,   209,
      -1,   212,   122,   284,    -1,   210,    -1,   212,    -1,   285,
      -1,   291,    -1,   290,    -1,   211,    -1,   249,   212,    -1,
     123,   213,   124,    -1,   284,    -1,   213,   125,   284,    -1,
     288,   122,   204,   210,   121,   207,    -1,   288,   122,   204,
     210,    -1,   288,   122,   204,   212,   121,   207,    -1,   217,
      35,    -1,    37,    -1,   292,    -1,   288,   122,    47,    -1,
     288,   122,    48,    -1,   288,   122,    46,    -1,   288,   122,
     290,    -1,   288,   122,   216,    -1,   288,   122,   218,    -1,
     288,   122,   204,   212,    -1,   288,   122,   292,   212,    -1,
     288,   122,    49,   212,    -1,   288,   295,   284,    -1,   288,
      72,    47,    -1,   288,    72,    48,    -1,   288,    73,    47,
      -1,   288,    73,    48,    -1,   288,    72,   288,    -1,   288,
      73,   288,    -1,   288,   122,   293,   284,    -1,   288,   122,
     288,   294,   284,    -1,   292,   212,   122,   284,    -1,    49,
     212,   122,   284,    -1,    47,   294,   288,    -1,    48,   294,
     288,    -1,    46,   294,   288,    -1,    46,   294,    46,    -1,
      47,   294,    47,    -1,    48,   294,    48,    -1,    47,   294,
      48,    -1,    48,   294,    47,    -1,   220,    35,    -1,   223,
      44,    37,    45,   291,    -1,   223,    44,    38,    45,   291,
      -1,   223,    44,    39,    45,   291,    -1,   223,    44,    40,
      45,   291,    -1,   223,    44,    41,    45,   291,    -1,   223,
      44,    42,    45,   291,    -1,   223,    44,    43,    45,   291,
      -1,   223,    44,    45,    45,   291,    -1,   223,    44,    44,
      45,   291,    -1,   223,   285,   224,   291,    -1,   223,    44,
      49,   224,   291,    -1,   223,    37,   224,   291,    -1,   223,
     290,   224,   291,    -1,   223,    38,   224,   291,    -1,   223,
      39,   224,   291,    -1,   223,    40,   224,   291,    -1,   223,
      41,   224,   291,    -1,   223,    42,   224,   291,    -1,   223,
      43,   224,   291,    -1,   223,    45,    45,   291,    -1,   223,
      45,   121,   291,    -1,   223,    44,    45,   291,    -1,   223,
      44,   121,   291,    -1,   223,   221,    45,   291,    -1,   288,
     286,   284,    -1,    47,   286,   288,    -1,    48,   286,   288,
      -1,    46,   286,   288,    -1,    47,   286,    47,    -1,    47,
     286,    48,    -1,    48,   286,    47,    -1,    48,   286,    48,
      -1,    46,   286,    46,    -1,    46,   286,   222,    -1,    47,
     286,    46,    -1,    48,   286,    46,    -1,    47,    -1,    48,
      -1,    42,    -1,    43,    -1,    45,    -1,   121,    -1,    45,
     291,    35,    -1,    12,   287,   227,    35,    -1,   228,    -1,
     227,   121,   228,    -1,   291,   229,    -1,    -1,    97,    -1,
       9,    46,   121,   249,    35,    -1,   232,    -1,   233,    -1,
     242,    -1,    26,    35,   234,   237,    35,   239,    27,    35,
      -1,    -1,   235,    -1,   236,    -1,   235,   236,    -1,    30,
     265,    35,    -1,    29,   247,   238,    -1,    32,   249,    -1,
      14,   249,    35,    15,   248,    -1,    -1,   121,   249,    -1,
      -1,   240,    -1,   241,    -1,   240,   241,    -1,    31,   253,
      35,    -1,   226,    -1,   243,    35,    -1,   250,   122,   244,
      -1,   288,   122,   244,    -1,   244,    -1,   246,    -1,   245,
      -1,   249,   128,   248,   260,    -1,   247,   260,    -1,   249,
      -1,    46,    -1,   291,    -1,    49,    -1,    51,    -1,    46,
      -1,   291,    -1,    49,    -1,   119,   251,   120,    -1,    -1,
     252,    -1,   253,    -1,   252,   121,   253,    -1,   288,   254,
      -1,    46,    54,   288,    -1,    -1,   254,   255,    -1,   101,
      -1,   102,    -1,    99,    -1,    98,   277,    -1,   257,    -1,
     258,    -1,   267,    -1,   259,    -1,   268,    -1,    18,   260,
      35,    -1,    33,   244,    35,    -1,    19,   260,    35,    -1,
     119,   261,   120,    -1,    -1,   262,    -1,   263,    -1,   262,
     121,   263,    -1,   265,    -1,   264,    -1,    46,    54,   266,
      -1,   266,   275,    -1,   284,    -1,    24,    35,   272,    25,
      35,    -1,    22,    35,   269,    23,    35,    -1,    -1,   270,
      -1,   271,    -1,   270,   271,    -1,    20,   265,    35,    -1,
      -1,   273,    -1,   274,    -1,   273,   274,    -1,    21,   265,
      35,    -1,    -1,   275,   276,    -1,   100,    -1,    98,   277,
      -1,    -1,   278,    -1,   119,    46,   120,    -1,   280,    35,
      -1,   281,    -1,   282,    -1,    17,   283,    -1,    16,   283,
      -1,    38,   291,   122,    47,    -1,    39,   291,   122,    48,
      -1,    41,   291,   122,    46,    -1,    46,   291,   122,   285,
      -1,   288,    -1,   285,    -1,    46,    -1,    47,    -1,    48,
      -1,    53,    -1,    55,    -1,    56,    -1,    57,    -1,    58,
      -1,    60,    -1,    59,    -1,    38,    -1,    39,    -1,    40,
      -1,    41,    -1,   289,    -1,   290,    -1,   291,    -1,    49,
      -1,    50,    -1,    52,    -1,    51,    -1,    37,    -1,   292,
      -1,    42,    -1,    43,    -1,    45,    -1,    38,    -1,    39,
      -1,    41,    -1,    40,    -1,    44,    -1,   129,    -1,   130,
      -1,   131,    -1,   132,    -1,   129,    -1,   133,    -1,   134,
      -1,   135,    -1,   136,    -1,   137,    -1,   131,    -1,   138,
      -1,    68,    -1,    61,    -1,    62,    -1,    63,    -1,    65,
      -1,    66,    -1,    64,    -1,    67,    -1,    56,    -1,    58,
      -1,    57,    -1,    60,    -1,    59,    -1,    55,    -1,    74,
      -1,    75,    -1,    76,    -1,    77,    -1,    80,    -1,    78,
      -1,    79,    -1,    81,    -1,    82,    -1,    70,    -1,    71,
      -1,    69,    -1,   297,   298,    -1,   142,    -1,   299,    -1,
     298,   299,    -1,   300,    -1,   163,    35,    -1,   230,    -1,
     159,    35,    -1,   145,    35,    -1,   189,    -1,    36,   301,
      -1,   302,   301,    -1,   304,    -1,   197,    -1,   304,    -1,
     303,   171,    36,    -1,   117,    -1,   204,   206,    35,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   550,   550,   551,   556,   562,   563,   566,   567,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   585,   586,
     589,   593,   599,   606,   607,   610,   611,   614,   618,   619,
     622,   623,   626,   629,   630,   633,   637,   648,   652,   654,
     658,   664,   668,   672,   677,   678,   682,   684,   688,   692,
     698,   702,   706,   707,   710,   711,   714,   716,   718,   720,
     722,   724,   726,   728,   730,   732,   734,   736,   738,   740,
     744,   749,   753,   757,   766,   777,   779,   781,   785,   794,
     795,   808,   812,   817,   818,   822,   823,   824,   827,   834,
     840,   841,   851,   853,   856,   857,   858,   859,   860,   861,
     862,   863,   864,   865,   866,   867,   868,   869,   870,   876,
     879,   884,   885,   890,   891,   894,   896,   904,   912,   913,
     915,   918,   924,   925,   934,   935,   936,   937,   945,   949,
     953,   962,   969,   976,   979,   980,   983,   992,   999,  1002,
    1003,  1006,  1007,  1010,  1046,  1048,  1052,  1054,  1059,  1061,
    1065,  1088,  1092,  1094,  1103,  1114,  1126,  1136,  1139,  1140,
    1143,  1152,  1161,  1166,  1171,  1192,  1197,  1238,  1256,  1263,
    1268,  1279,  1290,  1301,  1312,  1317,  1322,  1327,  1337,  1356,
    1390,  1392,  1394,  1396,  1398,  1400,  1402,  1404,  1409,  1418,
    1420,  1422,  1424,  1426,  1428,  1430,  1432,  1434,  1436,  1448,
    1453,  1455,  1457,  1459,  1461,  1463,  1465,  1467,  1469,  1471,
    1473,  1475,  1477,  1508,  1534,  1542,  1551,  1560,  1562,  1564,
    1566,  1568,  1572,  1577,  1579,  1584,  1585,  1588,  1589,  1592,
    1593,  1596,  1604,  1608,  1610,  1614,  1618,  1619,  1622,  1637,
    1641,  1642,  1645,  1657,  1658,  1662,  1664,  1668,  1672,  1674,
    1676,  1682,  1683,  1688,  1689,  1693,  1695,  1704,  1706,  1710,
    1714,  1716,  1718,  1722,  1723,  1726,  1746,  1753,  1755,  1765,
    1782,  1784,  1786,  1790,  1799,  1804,  1811,  1812,  1816,  1818,
    1822,  1824,  1829,  1830,  1834,  1836,  1838,  1840,  1850,  1854,
    1855,  1856,  1857,  1860,  1865,  1876,  1883,  1888,  1889,  1893,
    1895,  1899,  1900,  1903,  1907,  1911,  1915,  1924,  1934,  1935,
    1940,  1942,  1947,  1952,  1953,  1957,  1959,  1963,  1969,  1970,
    1974,  1976,  1984,  1985,  1989,  1993,  1996,  1997,  2000,  2004,
    2008,  2010,  2012,  2014,  2022,  2023,  2027,  2028,  2029,  2030,
    2033,  2034,  2035,  2036,  2037,  2038,  2041,  2042,  2043,  2044,
    2052,  2055,  2056,  2067,  2068,  2069,  2070,  2074,  2075,  2078,
    2079,  2080,  2081,  2082,  2083,  2084,  2085,  2088,  2089,  2090,
    2093,  2094,  2095,  2096,  2097,  2098,  2099,  2100,  2101,  2102,
    2103,  2104,  2105,  2106,  2107,  2108,  2109,  2110,  2111,  2112,
    2113,  2114,  2115,  2121,  2122,  2123,  2124,  2125,  2126,  2127,
    2128,  2129,  2130,  2131,  2132,  2144,  2152,  2156,  2157,  2160,
    2161,  2162,  2163,  2164,  2165,  2168,  2170,  2171,  2174,  2175,
    2178,  2182,  2187
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "\".HLL\"", "\".HLL_map\"",
  "\".loadlib\"", "\".sub\"", "\".end\"", "\".param\"", "\".lex\"",
  "\".line\"", "\".file\"", "\".local\"", "\".namespace\"",
  "\".invocant\"", "\".meth_call\"", "\".globalconst\"", "\".const\"",
  "\".return\"", "\".yield\"", "\".set_yield\"", "\".set_return\"",
  "\".begin_yield\"", "\".end_yield\"", "\".begin_return\"",
  "\".end_return\"", "\".begin_call\"", "\".end_call\"",
  "\".get_results\"", "\".call\"", "\".set_arg\"", "\".get_result\"",
  "\".nci_call\"", "\".tailcall\"", "\".annotate\"", "\"\\n\"",
  "\"label\"", "\"identifier\"", "\"int\"", "\"num\"", "\"pmc\"",
  "\"string\"", "\"if\"", "\"unless\"", "\"null\"", "\"goto\"",
  "\"string constant\"", "\"integer constant\"", "\"number constant\"",
  "\"PMC register\"", "\"number register\"", "\"string register\"",
  "\"integer register\"", "\"constant-value\"", "\"=>\"", "\"!=\"",
  "\"==\"", "\"<\"", "\"<=\"", "\">\"", "\">=\"", "\">>>\"", "\">>\"",
  "\"<<\"", "\"//\"", "\"||\"", "\"&&\"", "\"~~\"", "\".\"", "\">>>=\"",
  "\">>=\"", "\"<<=\"", "\"+=\"", "\"-=\"", "\"*=\"", "\"%=\"", "\"**=\"",
  "\"/=\"", "\"|=\"", "\"&=\"", "\"//=\"", "\"~=\"", "\".=\"", "\":init\"",
  "\":load\"", "\":main\"", "\":anon\"", "\":method\"", "\":outer\"",
  "\":vtable\"", "\":lex\"", "\":multi\"", "\":postcomp\"",
  "\":immediate\"", "\":subid\"", "\":instanceof\"", "\":nsentry\"",
  "\":unique_reg\"", "\":named\"", "\":slurpy\"", "\":flat\"",
  "\":optional\"", "\":opt_flag\"", "\":invocant\"", "\".macro\"",
  "\".endm\"", "\".macro_local\"", "\".macro_label\"", "\".macro_const\"",
  "\"macro-label\"", "\"macro-local\"", "\"macro-identifier\"",
  "\"macro-id-argument\"", "\"macro-argument\"", "\"macro-constant\"",
  "\"<pasm-input>\"", "\"<pir-input>\"", "\".pcc_sub\"", "\"parrot-op\"",
  "'('", "')'", "','", "'='", "'['", "']'", "';'", "'{'", "'}'", "'.'",
  "'-'", "'!'", "'~'", "'+'", "'/'", "'*'", "'%'", "'|'", "'&'", "\"**\"",
  "$accept", "TOP", "pir_contents", "opt_nl", "pir_chunks", "pir_chunk",
  "macro_definition", "macro_const", "macro", "macro_header",
  "macro_parameters", "macro_params", "macro_param", "macro_body",
  "macro_statements", "macro_statement", "macro_instr", "macro_label_decl",
  "macro_local_decl", "loadlib", "location_directive", "annotation",
  "hll_specifier", "hll_mapping", "namespace_decl", "opt_namespace",
  "namespace", "namespace_slice", "sub_def", "sub_end", "sub_head",
  "sub_id", "sub_flags", "sub_flag", "multi_type_list", "opt_multi_types",
  "multi_types", "multi_type", "parameter_list", "parameters", "parameter",
  "param", "param_flags", "param_flag", "invocant_param",
  "unique_reg_flag", "instructions", "instruction", "statement",
  "expansion_stat", "macro_expansion", "opt_macro_args", "macro_args",
  "macro_arg_list", "macro_arg", "braced_arg", "braced_contents",
  "braced_item", "empty_stat", "location_stat", "error_stat", "null_stat",
  "getresults_stat", "parrot_stat", "parrot_instruction", "parrot_op",
  "opt_op_args", "op_args", "parrot_op_args", "keylist_assignment",
  "op_arg", "op_arg_expr", "keyaccess", "keylist", "keys",
  "parrot_op_assign", "assignment_stat", "rhs_ident", "assignment",
  "binary_expr", "conditional_stat", "conditional_instr", "condition",
  "int_or_num", "if_unless", "then", "goto_stat", "local_decl",
  "local_id_list", "local_id", "has_unique_reg", "lex_decl",
  "invocation_stat", "invocation", "long_invocation_stat",
  "opt_long_arguments", "long_arguments", "long_argument",
  "long_invocation", "opt_ret_cont", "opt_long_results", "long_results",
  "long_result", "short_invocation_stat", "short_invocation",
  "simple_invocation", "methodcall", "subcall", "sub", "method",
  "pmc_object", "opt_target_list", "opt_list", "target_list",
  "result_target", "target_flags", "target_flag", "return_stat",
  "return_instr", "short_return_stat", "short_yield_stat", "arguments",
  "opt_arguments_list", "arguments_list", "argument", "named_arg",
  "short_arg", "arg", "long_return_stat", "long_yield_stat",
  "opt_yield_expressions", "yield_expressions", "yield_expression",
  "opt_return_expressions", "return_expressions", "return_expression",
  "arg_flags", "arg_flag", "opt_paren_string", "paren_string",
  "const_decl_stat", "const_stat", "const_decl", "globalconst_decl",
  "const_tail", "expression", "constant", "rel_op", "type", "target",
  "symbol", "reg", "identifier", "keyword", "unop", "binop",
  "augmented_op", "pasm_contents", "pasm_init", "pasm_lines", "pasm_line",
  "pasm_statement", "opt_pasm_instruction", "pasm_sub_directive",
  "pasm_sub_head", "pasm_instruction", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,    40,
      41,    44,    61,    91,    93,    59,   123,   125,    46,    45,
      33,   126,    43,    47,    42,    37,   124,    38,   374
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   139,   140,   140,   141,   142,   142,   143,   143,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   145,   145,
     146,   147,   148,   149,   149,   150,   150,   151,   152,   152,
     153,   153,   154,   155,   155,   156,   157,   158,   159,   159,
     160,   161,   162,   163,   164,   164,   165,   165,   166,   167,
     168,   169,   170,   170,   171,   171,   172,   172,   172,   172,
     172,   172,   172,   172,   172,   172,   172,   172,   172,   172,
     173,   174,   174,   175,   175,   176,   176,   176,   177,   178,
     178,   179,   180,   181,   181,   182,   182,   182,   183,   184,
     185,   185,   186,   186,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   188,
     189,   190,   190,   191,   191,   192,   192,   193,   193,   193,
     193,   194,   195,   195,   196,   196,   196,   196,   197,   198,
     199,   200,   201,   202,   203,   203,   204,   205,   205,   206,
     206,   207,   207,   208,   209,   209,   210,   210,   210,   210,
     211,   212,   213,   213,   214,   214,   214,   215,   216,   216,
     217,   217,   217,   217,   217,   217,   217,   217,   217,   217,
     217,   217,   217,   217,   217,   217,   217,   217,   217,   217,
     218,   218,   218,   218,   218,   218,   218,   218,   219,   220,
     220,   220,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   221,   221,   221,   221,   221,   221,   221,
     221,   221,   221,   221,   221,   222,   222,   223,   223,   224,
     224,   225,   226,   227,   227,   228,   229,   229,   230,   231,
     232,   232,   233,   234,   234,   235,   235,   236,   237,   237,
     237,   238,   238,   239,   239,   240,   240,   241,   241,   242,
     243,   243,   243,   244,   244,   245,   246,   247,   247,   248,
     248,   248,   248,   249,   249,   250,   251,   251,   252,   252,
     253,   253,   254,   254,   255,   255,   255,   255,   256,   257,
     257,   257,   257,   258,   258,   259,   260,   261,   261,   262,
     262,   263,   263,   264,   265,   266,   267,   268,   269,   269,
     270,   270,   271,   272,   272,   273,   273,   274,   275,   275,
     276,   276,   277,   277,   278,   279,   280,   280,   281,   282,
     283,   283,   283,   283,   284,   284,   285,   285,   285,   285,
     286,   286,   286,   286,   286,   286,   287,   287,   287,   287,
     288,   289,   289,   290,   290,   290,   290,   291,   291,   292,
     292,   292,   292,   292,   292,   292,   292,   293,   293,   293,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   294,
     294,   294,   294,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   296,   297,   298,   298,   299,
     299,   299,   299,   299,   299,   300,   300,   300,   301,   301,
     302,   303,   304
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     3,     0,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     7,     2,     0,     1,     1,     3,     1,     0,     1,
       1,     2,     2,     1,     1,     2,     3,     2,     2,     2,
       4,     2,     4,     4,     0,     1,     1,     3,     1,     6,
       1,     2,     1,     1,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     2,     4,     2,     2,     2,     2,     2,
       3,     0,     1,     1,     3,     1,     1,     1,     1,     0,
       2,     4,     2,     0,     2,     1,     1,     1,     4,     1,
       0,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     0,     3,     0,     1,     1,     3,     1,     1,     2,
       1,     3,     0,     2,     1,     1,     1,     2,     1,     2,
       2,     3,     3,     2,     2,     1,     1,     1,     1,     0,
       1,     1,     3,     3,     1,     1,     1,     1,     1,     1,
       2,     3,     1,     3,     6,     4,     6,     2,     1,     1,
       3,     3,     3,     3,     3,     3,     4,     4,     4,     3,
       3,     3,     3,     3,     3,     3,     4,     5,     4,     4,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     4,     5,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     3,     4,     1,     3,     2,     0,     1,     5,     1,
       1,     1,     8,     0,     1,     1,     2,     3,     3,     2,
       5,     0,     2,     0,     1,     1,     2,     3,     1,     2,
       3,     3,     1,     1,     1,     4,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     0,     1,     1,     3,
       2,     3,     0,     2,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     3,     3,     3,     3,     0,     1,     1,
       3,     1,     1,     3,     2,     1,     5,     5,     0,     1,
       1,     2,     3,     0,     1,     1,     2,     3,     0,     2,
       1,     2,     0,     1,     3,     2,     1,     1,     2,     2,
       4,     4,     4,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     2,     1,
       2,     1,     2,     2,     1,     2,     2,     1,     1,     1,
       3,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     5,     5,     0,     6,   406,     3,     0,     2,     0,
       1,     0,     0,     0,     0,     0,   136,     0,     0,   111,
     421,     0,    18,    19,     0,     0,     0,   414,   139,   411,
     405,   407,   409,     0,    54,   417,     0,     0,     0,     0,
       0,     0,     5,     7,    17,    14,    15,    16,    12,    13,
      11,     9,    54,    10,     0,    38,    39,    44,   128,   418,
     415,   419,   357,   362,   363,   365,   364,   359,   360,   366,
     361,    22,   358,     0,   113,     0,   413,    23,   412,   410,
     336,   337,   338,   353,   354,   356,   355,   339,     0,     0,
     140,   141,   144,   149,   145,     0,   146,   148,   147,   408,
     416,     0,    41,     0,    37,    53,    51,    52,     0,     0,
       0,     0,   328,     0,     6,     4,     0,     0,    48,     0,
      45,    46,    20,   111,   117,   118,   122,     0,   114,   115,
     120,   110,     0,    24,    25,    27,   353,     0,   152,   335,
     334,   350,   351,   352,   422,     0,   150,   420,    57,    58,
      59,    56,   322,     0,   322,    60,     0,    61,    62,     0,
       0,     0,    55,     0,     0,     0,     0,     0,     0,     8,
      79,   274,     0,   273,    43,     0,   119,     0,   112,     0,
       0,     0,   151,     0,   142,     0,    65,   323,     0,    66,
      71,    63,    67,    68,    69,    42,     0,     0,     0,     0,
      40,    90,    78,   238,    47,   124,   111,   126,   125,   121,
     123,   116,    28,    26,   153,     0,     0,    76,     0,    72,
      73,    77,    75,   330,   331,   332,   333,     0,     0,    80,
     127,     0,     0,     0,    29,    30,     0,    33,    34,   324,
      64,    70,     0,     0,    50,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   136,   359,   360,   366,   361,
     268,   353,   276,     0,    49,    91,    93,   107,   109,   105,
     106,   108,   104,   103,    94,     0,   139,   135,   102,     0,
      95,     0,     0,    96,    97,    98,   101,   239,   240,   241,
       0,   262,   264,   263,     0,   267,     0,   100,   288,   289,
     291,   290,   292,    99,     0,   326,   327,     0,   352,   358,
     346,   347,   348,   349,    83,     0,     0,    35,    21,    31,
      32,    74,   130,     0,   329,   297,     0,     0,   308,   313,
     243,     0,     0,    92,     0,     0,     0,     0,     0,   277,
     278,   282,   129,   133,   134,   137,   138,   145,   157,   188,
     357,   362,   363,   365,   364,   359,   360,   366,   361,   336,
     337,   338,     0,     0,     0,   351,   259,   266,     0,     0,
     325,   404,   402,   403,     0,     0,   393,   394,   395,   396,
     398,   399,   397,   400,   401,     0,     0,     0,     0,    82,
      36,     0,   233,   236,   336,     0,   298,   299,   302,   301,
     318,   305,   293,   295,     0,     0,   309,   310,     0,     0,
     314,   315,     0,     0,   244,   245,   132,   294,   131,   231,
       0,     0,   275,     0,   280,     0,   229,   230,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   340,   341,
     342,   343,   345,   344,     0,     0,     0,     0,     0,     0,
       0,   272,   270,   271,     0,   269,   260,   170,   171,   174,
     172,   173,   175,   357,   162,   160,   161,   353,   367,   368,
     369,     0,   164,   165,   261,     0,   351,   358,     0,   169,
       0,    81,    89,   322,   286,   284,   285,     0,    84,    86,
      87,    85,   232,     0,   237,   235,     0,   296,     0,   304,
       0,     0,   311,     0,     0,   316,     0,     0,     0,     0,
       0,   246,   179,   281,   279,   283,   143,   200,   202,   203,
     204,   205,   206,   207,     0,     0,     0,     0,     0,     0,
       0,     0,   361,   210,     0,   211,   208,   209,   221,   225,
     226,   222,   216,   223,   217,   218,   214,   224,   219,   220,
     215,   212,   198,   213,   201,   265,   392,   387,   389,   388,
     391,   390,   380,   381,   382,   385,   383,   384,   386,   379,
     371,   377,   370,   372,   373,   374,   375,   376,   378,     0,
       0,     0,   168,   155,   166,     0,   167,   176,   178,   287,
       0,   234,   303,   300,   322,   320,   319,   312,   307,   317,
     306,   247,     0,   251,   267,   249,   253,   189,   190,   191,
     192,   193,   194,   195,   197,   196,   199,   183,   182,   184,
     186,   180,   187,   185,   181,     0,     0,   177,     0,   321,
       0,     0,   248,     0,   258,     0,   254,   255,   154,   156,
      88,     0,   252,     0,     0,   256,   250,   257,   242
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     8,     5,    42,    43,    21,    22,    23,    24,
     132,   133,   134,   233,   234,   235,   236,   237,   238,    45,
      25,    47,    48,    49,    26,   119,   120,   121,    51,   264,
      52,   106,   101,   162,   191,   218,   219,   220,   201,   202,
     229,   314,   388,   498,   499,   500,   227,   265,   266,   267,
      27,    75,   127,   128,   129,   130,   177,   210,    59,   270,
     271,   272,   273,   274,   275,    28,   344,    89,    90,   346,
      91,    92,    93,    94,   137,   277,   278,   482,   279,   483,
     280,   281,   362,   551,   282,   428,   283,   284,   391,   392,
     505,    29,   286,   287,   288,   413,   414,   415,   520,   642,
     645,   646,   647,   289,   290,   291,   292,   293,   294,   464,
      95,   296,   338,   339,   340,   424,   501,   297,   298,   299,
     300,   326,   395,   396,   397,   398,   399,   400,   301,   302,
     405,   406,   407,   409,   410,   411,   509,   606,   186,   187,
     303,   304,    53,   306,   112,   401,   139,   454,   315,   140,
     141,   142,   143,    72,   488,   589,   386,     6,     7,    30,
      31,    32,    60,    33,    34,    35
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -597
static const yytype_int16 yypact[] =
{
     -54,    -4,    -4,    38,  -597,  -597,  -597,    15,  -597,    29,
    -597,    11,    32,    49,   -15,   195,  -597,   996,    74,    -5,
    -597,   101,  -597,  -597,    33,   134,   140,  -597,   244,  -597,
      15,  -597,  -597,   195,  -597,  -597,   156,   159,   167,   986,
     165,   171,   189,  -597,  -597,  -597,  -597,  -597,  -597,  -597,
    -597,  -597,  -597,  -597,   106,  -597,  -597,   194,  -597,  -597,
    -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,
    -597,  -597,  -597,   127,     4,   208,  -597,   996,  -597,  -597,
    -597,  -597,  -597,   121,  -597,  -597,  -597,  -597,   745,   213,
     129,  -597,  -597,  -597,  -597,   135,  -597,  -597,   137,  -597,
    -597,   382,  -597,   130,  -597,  -597,  -597,  -597,   996,   996,
     996,   996,  -597,   150,    29,  -597,   241,   973,  -597,   132,
     147,  -597,  -597,    -5,  -597,  -597,  -597,   154,   178,  -597,
    -597,  -597,   155,   179,  -597,  -597,  -597,    59,  -597,  -597,
    -597,  -597,  -597,  -597,  -597,   244,  -597,  -597,  -597,  -597,
    -597,  -597,   158,   183,   158,  -597,   184,  -597,  -597,   158,
     158,   158,  -597,   255,   217,   218,   219,   220,   300,  -597,
    -597,  -597,   312,  -597,  -597,   194,  -597,    -6,  -597,     4,
     313,   996,  -597,   745,  -597,   303,  -597,  -597,   986,  -597,
      44,  -597,  -597,  -597,  -597,  -597,   306,   302,   308,   108,
    -597,  -597,   347,  -597,  -597,  -597,    -5,  -597,  -597,  -597,
    -597,  -597,   128,  -597,  -597,   236,   237,  -597,   238,   240,
    -597,  -597,  -597,  -597,  -597,  -597,  -597,   527,   182,  -597,
    -597,   182,   250,   257,   128,  -597,   328,  -597,  -597,  -597,
    -597,  -597,    44,   329,  -597,   182,   165,   247,   247,   334,
     335,   336,   253,   450,   631,   517,   762,   779,   408,   996,
    -597,    30,   694,   338,  -597,  -597,  -597,  -597,  -597,  -597,
    -597,  -597,  -597,  -597,  -597,   339,   244,  -597,  -597,   340,
    -597,   341,   796,  -597,  -597,  -597,  -597,  -597,  -597,  -597,
     343,  -597,  -597,  -597,   247,   251,   261,  -597,  -597,  -597,
    -597,  -597,  -597,  -597,   349,  -597,  -597,   646,     6,   135,
    -597,  -597,  -597,  -597,  -597,   996,   275,  -597,  -597,  -597,
    -597,  -597,  -597,   996,  -597,   813,   352,   353,   369,   370,
     362,   359,   360,  -597,   363,   364,   278,   351,   277,   280,
    -597,  -597,  -597,  -597,  -597,  -597,  -597,   285,  -597,  -597,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,   224,   -18,   122,
     122,   122,   365,   -24,   122,   -24,  -597,  -597,   958,   450,
    -597,  -597,  -597,  -597,   878,   894,  -597,  -597,  -597,  -597,
    -597,  -597,  -597,  -597,  -597,   149,   745,   287,    45,  -597,
    -597,   -12,  -597,   322,   366,   301,   304,  -597,  -597,  -597,
    -597,  -597,  -597,  -597,   745,   399,   369,  -597,   745,   398,
     370,  -597,   745,    27,   362,  -597,  -597,  -597,  -597,  -597,
     745,   408,  -597,   694,    61,   745,  -597,  -597,   996,   996,
     996,   996,   996,   996,   996,   379,   386,   387,   388,   390,
     391,   392,   393,  1005,   -24,   996,   996,   996,  -597,  -597,
    -597,  -597,  -597,  -597,   830,   846,   862,   996,   996,   745,
     996,  -597,  -597,  -597,   247,  -597,  -597,  -597,  -597,  -597,
    -597,  -597,  -597,   270,   629,   643,   643,    30,  -597,  -597,
    -597,   244,  -597,  -597,  -597,   643,   404,   -21,   745,  -597,
     745,  -597,  -597,   158,  -597,  -597,  -597,   323,  -597,  -597,
    -597,  -597,  -597,   996,  -597,  -597,   745,  -597,   813,   133,
     409,   426,  -597,   427,   428,  -597,   444,   973,   450,   973,
     445,  -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,
    -597,  -597,  -597,  -597,   996,   996,   996,   996,   996,   996,
     996,   996,   996,  -597,   996,  -597,  -597,  -597,  -597,  -597,
    -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,
    -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,
    -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,
    -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,   942,
     910,   926,  -597,   361,   376,   745,  -597,  -597,  -597,  -597,
      44,  -597,  -597,  -597,   158,  -597,  -597,  -597,  -597,  -597,
    -597,  -597,   446,   377,  -597,  -597,    24,  -597,  -597,  -597,
    -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,
    -597,  -597,  -597,  -597,  -597,   244,   244,  -597,   307,  -597,
     468,   973,  -597,   694,  -597,   457,    24,  -597,   129,   129,
    -597,   958,  -597,   469,   470,  -597,  -597,  -597,  -597
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -597,  -597,  -597,    28,  -597,   371,     8,  -597,  -597,  -597,
    -597,  -597,   325,  -597,  -597,   269,  -597,  -597,  -597,  -597,
      -1,  -597,  -597,  -597,    10,  -597,  -597,   332,  -597,  -597,
    -597,   320,   458,  -597,  -597,  -597,  -597,  -235,  -597,  -597,
    -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,   258,  -597,
    -183,  -108,  -597,  -597,   337,  -597,  -597,  -597,  -180,  -597,
    -597,  -597,  -597,  -597,  -597,  -217,  -597,   235,  -397,  -597,
     384,    34,  -597,   -91,  -597,  -597,  -597,  -597,  -597,  -597,
    -597,  -597,  -597,  -597,  -597,  -287,  -597,  -596,  -597,    37,
    -597,  -179,  -597,  -597,  -597,  -597,  -597,   100,  -597,  -597,
    -597,  -597,  -116,  -597,  -597,  -240,  -597,  -597,    13,  -119,
    -115,   281,  -597,  -597,  -414,  -597,   111,  -597,  -597,  -597,
    -597,  -236,  -597,  -597,    40,  -597,  -277,    35,  -597,  -597,
    -597,  -597,   136,  -597,  -597,   142,  -597,  -597,  -149,    48,
    -597,  -597,  -150,  -597,   310,   -82,   -27,  -145,  -135,  -209,
    -597,   -25,   -17,  -211,  -597,  -335,  -597,  -597,  -597,  -597,
     520,  -597,   514,  -597,  -597,    39
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -358
static const yytype_int16 yytable[] =
{
      71,    96,   172,    97,   146,   189,   138,   321,    46,   524,
     276,    98,   327,   332,  -159,   176,   309,    44,   307,    50,
     644,   426,   107,   502,    11,    12,    13,   446,    14,   205,
       9,     4,    36,    37,    38,    39,   245,   276,    10,    12,
      13,   517,    14,   309,   268,   307,    40,   269,   285,   334,
     644,    15,    16,   341,    61,   643,   518,    54,   367,   519,
     135,     1,     2,    41,   429,   430,   431,   432,   433,   434,
     115,   268,    61,   364,   269,   285,   458,   305,   460,    55,
     491,    62,    63,    64,    65,    66,    67,    68,    69,    70,
     217,   164,   165,   166,   167,    56,   316,   427,   230,   221,
     173,   214,    88,   447,   305,   206,   207,   208,    57,   503,
     323,    73,   295,    46,    74,   123,   124,   125,    96,    17,
      97,   209,    44,    18,    50,  -273,    19,   510,    98,   466,
     126,   513,    20,    17,  -273,   516,    76,    18,   295,   295,
     590,   591,   492,   493,   494,   484,   495,   496,   497,  -274,
     595,   221,    77,    88,    80,    81,    82,   544,  -274,   493,
     494,    87,   495,   496,   135,   469,   472,    88,   481,    78,
     336,   107,   226,   222,   487,    79,   485,   448,   449,   450,
     451,   452,   453,   182,   183,   347,   473,    63,    64,    65,
      66,    67,    68,    69,    70,   474,   475,   476,   477,    84,
      85,    86,   102,   108,   109,   103,   110,   192,   193,   194,
     308,   111,   523,   104,   341,   455,   456,   113,   387,   459,
     310,   311,   312,   313,   114,   222,   263,   117,   565,   653,
      58,   604,    16,   605,   231,   232,   173,   308,   648,   649,
     118,   122,   335,   131,  -274,   552,   556,   560,   144,    96,
     145,    97,   163,   263,   295,   363,   174,   365,    88,    98,
    -273,   435,   436,   437,   438,   439,   440,   441,   442,   443,
     295,   168,   175,   444,   178,   180,   170,   185,   478,   479,
     480,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      80,    81,    82,    83,    84,    85,    86,    87,   389,   179,
     181,   195,   188,   190,   489,  -158,   393,  -136,  -136,  -136,
    -136,  -136,  -136,  -136,  -136,  -136,  -136,  -136,  -136,  -136,
    -136,  -136,  -136,  -136,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   522,   196,
     197,   198,   199,   526,   599,   445,   200,   203,   212,   215,
     224,   465,   173,   223,   225,   228,   239,   240,   241,   317,
     486,   242,   318,   320,   322,   638,   325,    88,   308,   328,
     329,   330,   262,   342,   343,   348,   349,   563,   366,   368,
     628,   631,   634,   369,   370,   390,   592,   402,   403,   404,
     594,   408,   412,  -136,   416,   417,   596,   422,   418,   419,
     420,   423,   612,   614,   615,   421,   597,   425,   598,   490,
     457,   527,   528,   529,   530,   531,   532,   533,   147,   504,
     506,   507,   511,   514,   534,   508,   543,   650,   545,   546,
     547,   535,   536,   537,   341,   538,   539,   540,   541,  -163,
     561,   562,   600,   564,   607,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    96,   639,    97,   136,    84,    85,
      86,   608,   609,   610,    98,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   611,
     616,   640,   635,   651,   654,   169,   393,    62,    63,    64,
      65,    66,    67,    68,    69,    70,   260,   636,   641,   171,
     173,   173,   173,   319,   657,   658,   213,   204,   216,   221,
     116,   345,   333,   637,   521,   593,   211,   617,   618,   619,
     620,   621,   622,   623,   624,   625,   652,   626,   243,   184,
     655,   613,   656,   331,   244,   525,    11,    12,    13,   245,
     601,   602,   512,   246,    40,   247,   248,   100,   603,   249,
      99,   250,   515,   251,     0,   252,   324,     0,     0,     0,
     253,     0,    58,   254,   255,    63,    64,    65,    66,   256,
     257,   258,   259,   260,     0,     0,   261,    84,    85,    86,
       0,     0,     0,   222,     0,     0,  -357,  -357,  -357,  -357,
    -357,  -357,  -357,  -357,  -357,  -357,  -357,  -357,  -357,  -357,
       0,     0,     0,     0,     0,     0,     0,     0,    96,    96,
      97,    97,     0,     0,     0,     0,     0,     0,    98,    98,
       0,     0,     0,     0,   173,     0,     0,     0,     0,     0,
       0,     0,   243,     0,   465,     0,  -357,     0,    19,  -357,
      11,    12,    13,   245,     0,  -357,   262,   246,    40,   247,
     248,     0,     0,   249,     0,   250,     0,   251,     0,   252,
       0,     0,     0,     0,   253,     0,    58,     0,   255,    63,
      64,    65,    66,   256,   257,   258,   259,   260,     0,     0,
     261,    84,    85,    86,   566,   567,   568,   569,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   566,   567,
     568,   569,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,     0,     0,     0,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,     0,
       0,    62,    63,    64,    65,    66,    67,    68,    69,    70,
     337,     0,    19,   136,    84,    85,    86,     0,  -268,     0,
     262,     0,     0,     0,     0,     0,     0,     0,   580,     0,
     581,   582,   583,   584,   585,   586,   587,   588,   385,     0,
       0,     0,   580,     0,   581,   582,   583,   584,   585,   586,
     587,   588,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    80,    81,    82,   136,    84,    85,    86,    87,  -227,
    -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,
    -227,  -227,  -227,  -227,  -227,  -227,  -228,  -228,  -228,  -228,
    -228,  -228,  -228,  -228,  -228,  -228,  -228,  -228,  -228,  -228,
    -228,  -228,  -228,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   136,    84,    85,    86,    87,
      62,    63,    64,    65,    66,    67,    68,    69,    70,   394,
      81,    82,   136,    84,    85,    86,    87,    62,    63,    64,
      65,    66,    67,    68,    69,    70,   548,   549,   550,   136,
      84,    85,    86,    62,    63,    64,    65,    66,    67,    68,
      69,    70,   553,   554,   555,   136,    84,    85,    86,    62,
      63,    64,    65,    66,    67,    68,    69,    70,   557,   558,
     559,   136,    84,    85,    86,    62,    63,    64,    65,    66,
      67,    68,    69,    70,     0,   467,   468,   136,    84,    85,
      86,    62,    63,    64,    65,    66,    67,    68,    69,    70,
       0,   470,   471,   136,    84,    85,    86,    62,    63,    64,
      65,    66,    67,    68,    69,    70,     0,   629,   630,   136,
      84,    85,    86,    62,    63,    64,    65,    66,    67,    68,
      69,    70,     0,   632,   633,   136,    84,    85,    86,    62,
      63,    64,    65,    66,    67,    68,    69,    70,   627,     0,
       0,   136,    84,    85,    86,    62,    63,    64,    65,    66,
      67,    68,    69,    70,   461,     0,     0,   462,     0,   463,
      62,    63,    64,    65,    66,    67,    68,    69,    70,     0,
       0,     0,   171,    62,    63,    64,    65,    66,    67,    68,
      69,    70,   105,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    62,    63,    64,    65,    66,    67,    68,    69,
     542
};

static const yytype_int16 yycheck[] =
{
      17,    28,   117,    28,    95,   154,    88,   242,     9,   423,
     227,    28,   248,   253,    35,   123,   227,     9,   227,     9,
     616,    45,    39,    35,     9,    10,    11,    45,    13,    35,
       2,    35,     3,     4,     5,     6,    12,   254,     0,    10,
      11,    14,    13,   254,   227,   254,    17,   227,   227,   258,
     646,    36,    37,   262,    15,    31,    29,    46,   294,    32,
      77,   115,   116,    34,   351,   352,   353,   354,   355,   356,
      42,   254,    33,   282,   254,   254,   363,   227,   365,    47,
      35,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,   108,   109,   110,   111,    46,   231,   121,   206,   190,
     117,   183,   123,   121,   254,   111,   112,   113,   123,   121,
     245,    37,   227,   114,   119,   111,   112,   113,   145,   104,
     145,   127,   114,   108,   114,   119,   111,   404,   145,   369,
     126,   408,   117,   104,   128,   412,    35,   108,   253,   254,
     475,   476,    97,    98,    99,   385,   101,   102,   103,   119,
     485,   242,   119,   123,    46,    47,    48,   444,   128,    98,
      99,    53,   101,   102,   181,   374,   375,   123,   385,    35,
     261,   188,   199,   190,   385,    35,   385,    55,    56,    57,
      58,    59,    60,   124,   125,   276,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    46,    38,    39,    46,    41,   159,   160,   161,
     227,    46,   421,    46,   423,   360,   361,    46,   309,   364,
      38,    39,    40,    41,    35,   242,   227,   121,   464,   643,
      35,    98,    37,   100,   106,   107,   253,   254,   635,   636,
      46,   114,   259,    35,   123,   454,   455,   456,    35,   276,
     121,   276,   122,   254,   369,   282,   124,   282,   123,   276,
     123,    37,    38,    39,    40,    41,    42,    43,    44,    45,
     385,   121,   125,    49,   120,   120,    35,   119,   129,   130,
     131,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,   315,   121,
     121,    46,   119,   119,   386,    35,   323,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,   420,   122,
     122,   122,   122,   425,   493,   121,    46,    35,    35,    46,
      48,   368,   369,    47,    46,     8,   120,   120,   120,   109,
     385,   121,   105,    35,    35,   600,   119,   123,   385,    35,
      35,    35,   119,    35,    35,    35,    35,   459,    35,   128,
     589,   590,   591,   122,    35,   110,   477,    35,    35,    20,
     481,    21,    30,   123,    35,    35,   487,   120,    35,    35,
     122,   121,   517,   518,   519,    54,   488,   122,   490,   122,
      45,   428,   429,   430,   431,   432,   433,   434,    36,    97,
      54,   120,    23,    25,    45,   121,   443,   120,   445,   446,
     447,    45,    45,    45,   643,    45,    45,    45,    45,    35,
     457,   458,   119,   460,    35,    37,    38,    39,    40,    41,
      42,    43,    44,    45,   481,   604,   481,    49,    50,    51,
      52,    35,    35,    35,   481,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    35,
      35,    35,   121,    15,    27,   114,   503,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,   121,   121,    49,
     517,   518,   519,   234,    35,    35,   181,   175,   188,   600,
      52,   276,   254,   595,   414,   481,   179,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   641,   544,     1,   145,
     646,   518,   651,   252,     7,   424,     9,    10,    11,    12,
     503,   506,   406,    16,    17,    18,    19,    33,   508,    22,
      30,    24,   410,    26,    -1,    28,   246,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    -1,    49,    50,    51,    52,
      -1,    -1,    -1,   600,    -1,    -1,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   635,   636,
     635,   636,    -1,    -1,    -1,    -1,    -1,    -1,   635,   636,
      -1,    -1,    -1,    -1,   641,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,   651,    -1,   119,    -1,   111,   122,
       9,    10,    11,    12,    -1,   128,   119,    16,    17,    18,
      19,    -1,    -1,    22,    -1,    24,    -1,    26,    -1,    28,
      -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    -1,    -1,
      49,    50,    51,    52,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    -1,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,   111,    49,    50,    51,    52,    -1,   119,    -1,
     119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,    -1,
     131,   132,   133,   134,   135,   136,   137,   138,   122,    -1,
      -1,    -1,   129,    -1,   131,   132,   133,   134,   135,   136,
     137,   138,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    -1,    47,    48,    49,    50,    51,
      52,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      -1,    47,    48,    49,    50,    51,    52,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    -1,    47,    48,    49,
      50,    51,    52,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    -1,    47,    48,    49,    50,    51,    52,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      -1,    49,    50,    51,    52,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    -1,    -1,    49,    -1,    51,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      -1,    -1,    49,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    37,    38,    39,    40,    41,    42,    43,    44,
      45
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   115,   116,   140,    35,   142,   296,   297,   141,   142,
       0,     9,    10,    11,    13,    36,    37,   104,   108,   111,
     117,   145,   146,   147,   148,   159,   163,   189,   204,   230,
     298,   299,   300,   302,   303,   304,     3,     4,     5,     6,
      17,    34,   143,   144,   145,   158,   159,   160,   161,   162,
     163,   167,   169,   281,    46,    47,    46,   123,    35,   197,
     301,   304,    37,    38,    39,    40,    41,    42,    43,    44,
      45,   291,   292,    37,   119,   190,    35,   119,    35,    35,
      46,    47,    48,    49,    50,    51,    52,    53,   123,   206,
     207,   209,   210,   211,   212,   249,   285,   290,   291,   299,
     301,   171,    46,    46,    46,    46,   170,   291,    38,    39,
      41,    46,   283,    46,    35,   142,   171,   121,    46,   164,
     165,   166,   114,   111,   112,   113,   126,   191,   192,   193,
     194,    35,   149,   150,   151,   291,    49,   213,   284,   285,
     288,   289,   290,   291,    35,   121,   212,    36,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,   172,   122,   291,   291,   291,   291,   121,   144,
      35,    49,   249,   291,   124,   125,   190,   195,   120,   121,
     120,   121,   124,   125,   209,   119,   277,   278,   119,   277,
     119,   173,   278,   278,   278,    46,   122,   122,   122,   122,
      46,   177,   178,    35,   166,    35,   111,   112,   113,   127,
     196,   193,    35,   151,   284,    46,   170,    46,   174,   175,
     176,   212,   291,    47,    48,    46,   285,   185,     8,   179,
     190,   106,   107,   152,   153,   154,   155,   156,   157,   120,
     120,   120,   121,     1,     7,    12,    16,    18,    19,    22,
      24,    26,    28,    33,    36,    37,    42,    43,    44,    45,
      46,    49,   119,   159,   168,   186,   187,   188,   189,   197,
     198,   199,   200,   201,   202,   203,   204,   214,   215,   217,
     219,   220,   223,   225,   226,   230,   231,   232,   233,   242,
     243,   244,   245,   246,   247,   249,   250,   256,   257,   258,
     259,   267,   268,   279,   280,   281,   282,   288,   291,   292,
      38,    39,    40,    41,   180,   287,   287,   109,   105,   154,
      35,   176,    35,   287,   283,   119,   260,   260,    35,    35,
      35,   250,   244,   187,   288,   291,   212,    46,   251,   252,
     253,   288,    35,    35,   205,   206,   208,   212,    35,    35,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,   221,   285,   288,   290,    35,   260,   128,   122,
      35,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,   122,   295,   212,   181,   291,
     110,   227,   228,   291,    46,   261,   262,   263,   264,   265,
     266,   284,    35,    35,    20,   269,   270,   271,    21,   272,
     273,   274,    30,   234,   235,   236,    35,    35,    35,    35,
     122,    54,   120,   121,   254,   122,    45,   121,   224,   224,
     224,   224,   224,   224,   224,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    49,   121,    45,   121,    55,    56,
      57,    58,    59,    60,   286,   286,   286,    45,   224,   286,
     224,    46,    49,    51,   248,   291,   244,    47,    48,   288,
      47,    48,   288,    37,    46,    47,    48,    49,   129,   130,
     131,   204,   216,   218,   244,   288,   290,   292,   293,   284,
     122,    35,    97,    98,    99,   101,   102,   103,   182,   183,
     184,   255,    35,   121,    97,   229,    54,   120,   121,   275,
     265,    23,   271,   265,    25,   274,   265,    14,    29,    32,
     237,   236,   284,   288,   253,   255,   284,   291,   291,   291,
     291,   291,   291,   291,    45,    45,    45,    45,    45,    45,
      45,    45,    45,   291,   224,   291,   291,   291,    46,    47,
      48,   222,   288,    46,    47,    48,   288,    46,    47,    48,
     288,   291,   291,   284,   291,   260,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
     129,   131,   132,   133,   134,   135,   136,   137,   138,   294,
     294,   294,   212,   210,   212,   294,   212,   284,   284,   277,
     119,   228,   266,   263,    98,   100,   276,    35,    35,    35,
      35,    35,   249,   247,   249,   249,    35,   291,   291,   291,
     291,   291,   291,   291,   291,   291,   291,    46,   288,    47,
      48,   288,    47,    48,   288,   121,   121,   284,   176,   277,
      35,   121,   238,    31,   226,   239,   240,   241,   207,   207,
     120,    15,   249,   253,    27,   241,   248,    35,    35
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (yyscanner, lexer, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, yyscanner)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, yyscanner, lexer); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, yyscan_t yyscanner, struct lexer_state * const lexer)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yyscanner, lexer)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    yyscan_t yyscanner;
    struct lexer_state * const lexer;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yyscanner);
  YYUSE (lexer);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, yyscan_t yyscanner, struct lexer_state * const lexer)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yyscanner, lexer)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    yyscan_t yyscanner;
    struct lexer_state * const lexer;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yyscanner, lexer);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, yyscan_t yyscanner, struct lexer_state * const lexer)
#else
static void
yy_reduce_print (yyvsp, yyrule, yyscanner, lexer)
    YYSTYPE *yyvsp;
    int yyrule;
    yyscan_t yyscanner;
    struct lexer_state * const lexer;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       , yyscanner, lexer);
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, yyscanner, lexer); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, yyscan_t yyscanner, struct lexer_state * const lexer)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yyscanner, lexer)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    yyscan_t yyscanner;
    struct lexer_state * const lexer;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yyscanner);
  YYUSE (lexer);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (yyscan_t yyscanner, struct lexer_state * const lexer);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (yyscan_t yyscanner, struct lexer_state * const lexer)
#else
int
yyparse (yyscanner, lexer)
    yyscan_t yyscanner;
    struct lexer_state * const lexer;
#endif
#endif
{
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:
#line 559 "pir.y"
    { fixup_global_labels(lexer); ;}
    break;

  case 20:
#line 590 "pir.y"
    { new_macro_const(lexer->macros, (yyvsp[(2) - (3)].sval), (yyvsp[(3) - (3)].sval), yypirget_lineno(yyscanner)); ;}
    break;

  case 21:
#line 596 "pir.y"
    { /* fprintf(stderr, "macro body: [%s]\n", CURRENT_MACRO(lexer)->body);*/ ;}
    break;

  case 22:
#line 600 "pir.y"
    {
                          new_macro(lexer->macros, (yyvsp[(2) - (2)].sval), yypirget_lineno(yyscanner), TRUE,
                                    lexer->macro_size);
                        ;}
    break;

  case 27:
#line 615 "pir.y"
    { add_macro_param(CURRENT_MACRO(lexer), (yyvsp[(1) - (1)].sval)); ;}
    break;

  case 35:
#line 634 "pir.y"
    { store_macro_string(CURRENT_MACRO(lexer), "%s\n", (yyvsp[(2) - (2)].sval)); ;}
    break;

  case 36:
#line 638 "pir.y"
    {
                          store_macro_string(CURRENT_MACRO(lexer), ".local %s %s\n",
                                             pir_type_names[(yyvsp[(2) - (3)].ival)], (yyvsp[(3) - (3)].sval));
                        ;}
    break;

  case 37:
#line 649 "pir.y"
    { load_library(lexer, (yyvsp[(2) - (2)].sval)); ;}
    break;

  case 38:
#line 653 "pir.y"
    { yypirset_lineno ((yyvsp[(2) - (2)].ival), yyscanner); ;}
    break;

  case 39:
#line 655 "pir.y"
    { lexer->filename = (yyvsp[(2) - (2)].sval); ;}
    break;

  case 40:
#line 659 "pir.y"
    { /* XXX */ ;}
    break;

  case 41:
#line 665 "pir.y"
    { set_hll(lexer, (yyvsp[(2) - (2)].sval)); ;}
    break;

  case 42:
#line 669 "pir.y"
    { set_hll_map(lexer, (yyvsp[(2) - (4)].sval), (yyvsp[(4) - (4)].sval)); ;}
    break;

  case 43:
#line 673 "pir.y"
    { set_namespace(lexer, (yyvsp[(3) - (4)].key)); ;}
    break;

  case 44:
#line 677 "pir.y"
    { (yyval.key) = NULL; ;}
    break;

  case 45:
#line 679 "pir.y"
    { (yyval.key) = (yyvsp[(1) - (1)].key); ;}
    break;

  case 46:
#line 683 "pir.y"
    { (yyval.key) = new_key(lexer, (yyvsp[(1) - (1)].expr)); ;}
    break;

  case 47:
#line 685 "pir.y"
    { (yyval.key) = add_key(lexer, (yyvsp[(1) - (3)].key), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 48:
#line 689 "pir.y"
    { (yyval.expr) = expr_from_string(lexer, (yyvsp[(1) - (1)].sval)); ;}
    break;

  case 50:
#line 699 "pir.y"
    { close_sub(lexer); ;}
    break;

  case 51:
#line 703 "pir.y"
    { new_subr(lexer, (yyvsp[(2) - (2)].sval)); ;}
    break;

  case 56:
#line 715 "pir.y"
    { set_sub_flag(lexer, PIRC_SUB_FLAG_ANON);;}
    break;

  case 57:
#line 717 "pir.y"
    { set_sub_flag(lexer, PIRC_SUB_FLAG_INIT); ;}
    break;

  case 58:
#line 719 "pir.y"
    { set_sub_flag(lexer, PIRC_SUB_FLAG_LOAD); ;}
    break;

  case 59:
#line 721 "pir.y"
    { set_sub_flag(lexer, PIRC_SUB_FLAG_MAIN); ;}
    break;

  case 60:
#line 723 "pir.y"
    { set_sub_flag(lexer, PIRC_SUB_FLAG_LEX); ;}
    break;

  case 61:
#line 725 "pir.y"
    { set_sub_flag(lexer, PIRC_SUB_FLAG_POSTCOMP); ;}
    break;

  case 62:
#line 727 "pir.y"
    { set_sub_flag(lexer, PIRC_SUB_FLAG_IMMEDIATE); ;}
    break;

  case 63:
#line 729 "pir.y"
    { set_sub_flag(lexer, PIRC_SUB_FLAG_MULTI); ;}
    break;

  case 64:
#line 731 "pir.y"
    { set_sub_outer(lexer, (yyvsp[(3) - (4)].sval)); ;}
    break;

  case 65:
#line 733 "pir.y"
    { set_sub_methodname(lexer, (yyvsp[(2) - (2)].sval)); ;}
    break;

  case 66:
#line 735 "pir.y"
    { set_sub_vtable(lexer, (yyvsp[(2) - (2)].sval)); ;}
    break;

  case 67:
#line 737 "pir.y"
    { set_sub_subid(lexer, (yyvsp[(2) - (2)].sval)); ;}
    break;

  case 68:
#line 739 "pir.y"
    { set_sub_instanceof(lexer, (yyvsp[(2) - (2)].sval)); ;}
    break;

  case 69:
#line 741 "pir.y"
    { set_sub_nsentry(lexer, (yyvsp[(2) - (2)].sval)); ;}
    break;

  case 70:
#line 745 "pir.y"
    { set_sub_multi_types(lexer, (yyvsp[(2) - (3)].expr)); ;}
    break;

  case 71:
#line 749 "pir.y"
    {
                          CURRENT_SUB(lexer)->info.num_multi_types = 1;
                          /* n=1 means :multi() -- without any types. */
                        ;}
    break;

  case 72:
#line 754 "pir.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 73:
#line 758 "pir.y"
    {
                          CURRENT_SUB(lexer)->info.num_multi_types = 2;
                          /* start counting multi types; always 1 higher than actual number
                           * so that n=0 means no :multi, n=1 means :multi(), n=2 means
                           * :multi(Type1), n=3 means :multi(Type1,Type2), etc.
                           */
                           (yyval.expr) = (yyvsp[(1) - (1)].expr);
                        ;}
    break;

  case 74:
#line 767 "pir.y"
    {
                          ++CURRENT_SUB(lexer)->info.num_multi_types;
                          /* link the multi types in reverse other. That's fine,
                           * as long as you remember that it's reversed.
                           */
                          (yyvsp[(3) - (3)].expr)->next = (yyvsp[(1) - (3)].expr);
                          (yyval.expr) = (yyvsp[(3) - (3)].expr);
                        ;}
    break;

  case 75:
#line 778 "pir.y"
    { (yyval.expr) = expr_from_ident(lexer, (yyvsp[(1) - (1)].sval)); ;}
    break;

  case 76:
#line 780 "pir.y"
    { (yyval.expr) = expr_from_string(lexer, (yyvsp[(1) - (1)].sval)); ;}
    break;

  case 77:
#line 782 "pir.y"
    { (yyval.expr) = expr_from_key(lexer, (yyvsp[(1) - (1)].key)); ;}
    break;

  case 78:
#line 786 "pir.y"
    {
                           /* if there are parameters, then emit a get_params instruction. */
                           if ((yyvsp[(1) - (1)].uval) > 0)
                               generate_parameters_instr(lexer, (yyvsp[(1) - (1)].uval));
                         ;}
    break;

  case 79:
#line 794 "pir.y"
    { (yyval.uval) = 0; ;}
    break;

  case 80:
#line 796 "pir.y"
    {
                          /* if the :named flag was set, there's an extra
                           * constant string argument for the name. count that too.
                           */
                          if (TEST_FLAG((yyvsp[(2) - (2)].targ)->flags, TARGET_FLAG_NAMED))
                              (yyval.uval) += 2;
                          else
                              ++(yyval.uval);

                        ;}
    break;

  case 81:
#line 809 "pir.y"
    { (yyval.targ) = set_param_flag(lexer, (yyvsp[(2) - (4)].targ), (yyvsp[(3) - (4)].ival)); ;}
    break;

  case 82:
#line 813 "pir.y"
    { (yyval.targ) = add_param(lexer, (yyvsp[(1) - (2)].ival), (yyvsp[(2) - (2)].sval)); ;}
    break;

  case 83:
#line 817 "pir.y"
    { (yyval.ival) = 0; ;}
    break;

  case 84:
#line 819 "pir.y"
    { SET_FLAG((yyval.ival), (yyvsp[(2) - (2)].ival)); ;}
    break;

  case 88:
#line 828 "pir.y"
    { (yyval.ival) = TARGET_FLAG_INVOCANT;
                           /* XXX handle multi_type */

                         ;}
    break;

  case 89:
#line 835 "pir.y"
    { (yyval.ival) = TARGET_FLAG_UNIQUE_REG; ;}
    break;

  case 91:
#line 842 "pir.y"
    {
                         ++lexer->stmt_counter;
                         /* increment the logical statement counter; a statement can be
                          * multiple lines, but each statement has its own ID for the
                          * linear scan register allocator.
                          */
                        ;}
    break;

  case 92:
#line 852 "pir.y"
    { set_label(lexer, (yyvsp[(1) - (2)].sval)); ;}
    break;

  case 110:
#line 880 "pir.y"
    { (yyval.sval) = expand_macro(yyscanner, (yyvsp[(1) - (3)].mval), (yyvsp[(2) - (3)].pval)); ;}
    break;

  case 111:
#line 884 "pir.y"
    { (yyval.pval) = NULL; ;}
    break;

  case 112:
#line 886 "pir.y"
    { (yyval.pval) = (yyvsp[(2) - (3)].pval); ;}
    break;

  case 113:
#line 890 "pir.y"
    { (yyval.pval) = NULL; ;}
    break;

  case 115:
#line 895 "pir.y"
    { (yyval.pval) = new_macro_param((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 116:
#line 897 "pir.y"
    {
                          macro_param *param = new_macro_param((yyvsp[(3) - (3)].sval));
                          param->next = (yyvsp[(1) - (3)].pval);
                          (yyval.pval) = param;
                        ;}
    break;

  case 117:
#line 905 "pir.y"
    {
                          symbol *sym = find_symbol(lexer, (yyvsp[(1) - (1)].sval));
                          if (sym == NULL) {
                              yypirerror(yyscanner, lexer, "macro argument '%s' is not a "
                                                           "declared identifier", (yyvsp[(1) - (1)].sval));
                          }
                        ;}
    break;

  case 119:
#line 914 "pir.y"
    { (yyval.sval) = expand_macro(yyscanner, (yyvsp[(1) - (2)].mval), (yyvsp[(2) - (2)].pval)); ;}
    break;

  case 121:
#line 919 "pir.y"
    { (yyval.sval) = (yyvsp[(2) - (3)].sval); ;}
    break;

  case 122:
#line 924 "pir.y"
    { (yyval.sval) = ""; ;}
    break;

  case 123:
#line 926 "pir.y"
    { /* XXX cleanup memory stuff */
                          char *newbuff = (char *)mem_sys_allocate((strlen((yyvsp[(1) - (2)].sval)) + strlen((yyvsp[(2) - (2)].sval)) + 2)
                                                                   * sizeof (char));
                          sprintf(newbuff, "%s %s", (yyvsp[(1) - (2)].sval), (yyvsp[(2) - (2)].sval));
                          (yyval.sval) = newbuff;
                        ;}
    break;

  case 127:
#line 938 "pir.y"
    { (yyval.sval) = expand_macro(yyscanner, (yyvsp[(1) - (2)].mval), (yyvsp[(2) - (2)].pval)); ;}
    break;

  case 128:
#line 946 "pir.y"
    { set_instr(lexer, NULL); ;}
    break;

  case 130:
#line 954 "pir.y"
    {
                           if (lexer->parse_errors > MAX_NUM_ERRORS)
                               panic(lexer, "Too many errors. Compilation aborted.\n");

                           yyerrok;
                         ;}
    break;

  case 131:
#line 963 "pir.y"
    {
                           set_instrf(lexer, "null", "%T", (yyvsp[(2) - (3)].targ));
                           get_opinfo(yyscanner);
                         ;}
    break;

  case 132:
#line 970 "pir.y"
    {
                           set_instrf(lexer, "get_results", "%T", (yyvsp[(2) - (3)].targ));
                           get_opinfo(yyscanner);
                         ;}
    break;

  case 136:
#line 984 "pir.y"
    { /* at this point, TK_IDENT may in fact be a symbol identifier,
                            * not an op, so don't do any checks like is_parrot_op() just yet.
                            */
                           set_instr(lexer, (yyvsp[(1) - (1)].sval));
                           (yyval.sval) = (yyvsp[(1) - (1)].sval);
                         ;}
    break;

  case 137:
#line 993 "pir.y"
    { /* when this rule is activated, the initial identifier must
                           * be a parrot op.
                           */
                          if (check_op_args_for_symbols(yyscanner))
                              do_strength_reduction(yyscanner);
                        ;}
    break;

  case 143:
#line 1011 "pir.y"
    {
                         /* the "instruction" that was set now appears to be
                          * an identifier; get the name, and check its type.
                          */
                         char const * const instr = CURRENT_INSTRUCTION(lexer)->opname;
                         symbol     *       sym   = find_symbol(lexer, instr);
                         target     *       obj;

                         /* find the symbol for the object being indexed;
                          * it must have been declared.
                          */
                         if (sym == NULL) {
                            yypirerror(yyscanner, lexer, "indexed object '%s' not declared", instr);
                            sym = new_symbol(lexer, instr, PMC_TYPE);
                         }
                         else if (sym->info.type != PMC_TYPE)
                            /* found symbol, now check it's a PMC */
                            yypirerror(yyscanner, lexer,
                                    "indexed object '%s' must be of type 'pmc'", instr);

                         /* convert the symbol into a target */
                         obj = target_from_symbol(lexer, sym);

                         /* set the key on the target */
                         set_target_key(obj, (yyvsp[(1) - (3)].key));

                         /* indexed operation is a "set" opcode */
                         update_instr(lexer, "set");
                         unshift_operand(lexer, (yyvsp[(3) - (3)].expr));
                         unshift_operand(lexer, expr_from_target(lexer, obj));

                         get_opinfo(yyscanner);
                       ;}
    break;

  case 144:
#line 1047 "pir.y"
    { push_operand(lexer, (yyvsp[(1) - (1)].expr)); ;}
    break;

  case 145:
#line 1049 "pir.y"
    { push_operand(lexer, expr_from_key(lexer, (yyvsp[(1) - (1)].key))); ;}
    break;

  case 146:
#line 1053 "pir.y"
    { (yyval.expr) = expr_from_const(lexer, (yyvsp[(1) - (1)].cval)); ;}
    break;

  case 147:
#line 1055 "pir.y"
    { /* this is either a LABEL or a symbol; in the latter case, the type
                            * will be filled in later. */
                           (yyval.expr) = expr_from_ident(lexer, (yyvsp[(1) - (1)].sval));
                         ;}
    break;

  case 148:
#line 1060 "pir.y"
    { (yyval.expr) = expr_from_target(lexer, (yyvsp[(1) - (1)].targ)); ;}
    break;

  case 149:
#line 1062 "pir.y"
    { (yyval.expr) = expr_from_target(lexer, (yyvsp[(1) - (1)].targ)); ;}
    break;

  case 150:
#line 1066 "pir.y"
    {
                           /* if $1 is a register, just return that */
                           if (TEST_FLAG((yyvsp[(1) - (2)].targ)->flags, TARGET_FLAG_IS_REG))
                               (yyval.targ) = (yyvsp[(1) - (2)].targ);
                           else { /* it's not a register, so it must be a declared symbol */
                               if ((yyvsp[(1) - (2)].targ)->info->type != PMC_TYPE)
                                   yypirerror(yyscanner, lexer,
                                           "indexed object '%s' is not of type 'pmc'",
                                           (yyvsp[(1) - (2)].targ)->info->id.name);

                               /* create a target node based on the symbol node;
                                * sym already has a PASM register, so through
                                * this the target will get that too.
                                */
                               (yyval.targ) = (yyvsp[(1) - (2)].targ);
                           }

                           /* in both cases (register or symbol), set the key on this target */
                           set_target_key((yyval.targ), (yyvsp[(2) - (2)].key));
                         ;}
    break;

  case 151:
#line 1089 "pir.y"
    { (yyval.key) = (yyvsp[(2) - (3)].key); ;}
    break;

  case 152:
#line 1093 "pir.y"
    { (yyval.key) = new_key(lexer, (yyvsp[(1) - (1)].expr)); ;}
    break;

  case 153:
#line 1095 "pir.y"
    { (yyval.key) = add_key(lexer, (yyvsp[(1) - (3)].key), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 154:
#line 1104 "pir.y"
    {
                          /* the instruction is already set in parrot_op rule */
                          unshift_operand(lexer, (yyvsp[(4) - (6)].expr));
                          unshift_operand(lexer, expr_from_target(lexer, (yyvsp[(1) - (6)].targ)));

                          if (check_op_args_for_symbols(yyscanner)) {
                              check_first_arg_direction(yyscanner, (yyvsp[(3) - (6)].sval));
                              do_strength_reduction(yyscanner);
                          }
                        ;}
    break;

  case 155:
#line 1115 "pir.y"
    {
                          /* the instruction is already set in parrot_op rule */
                          unshift_operand(lexer, (yyvsp[(4) - (4)].expr));
                          unshift_operand(lexer, expr_from_target(lexer, (yyvsp[(1) - (4)].targ)));

                          /* if checking op args is successful, do other checks */
                          if (check_op_args_for_symbols(yyscanner)) {
                              check_first_arg_direction(yyscanner, (yyvsp[(3) - (4)].sval));
                              do_strength_reduction(yyscanner);
                          }
                        ;}
    break;

  case 156:
#line 1127 "pir.y"
    { /* XXX create a PMC const for $4 */
                          unshift_operand(lexer, expr_from_key(lexer, (yyvsp[(4) - (6)].key)));
                          unshift_operand(lexer, expr_from_target(lexer, (yyvsp[(1) - (6)].targ)));
                          if (check_op_args_for_symbols(yyscanner))
                              check_first_arg_direction(yyscanner, (yyvsp[(3) - (6)].sval));
                              /* no strength reduction here */
                        ;}
    break;

  case 160:
#line 1144 "pir.y"
    {
                          if ((yyvsp[(3) - (3)].ival) == 0)
                              set_instrf(lexer, "null", "%T", (yyvsp[(1) - (3)].targ));
                          else
                              set_instrf(lexer, "set", "%T%i", (yyvsp[(1) - (3)].targ), (yyvsp[(3) - (3)].ival));

                          get_opinfo(yyscanner);
                        ;}
    break;

  case 161:
#line 1153 "pir.y"
    {
                          if ((yyvsp[(3) - (3)].dval) == 0.0)
                              set_instrf(lexer, "null", "%T", (yyvsp[(1) - (3)].targ));
                          else
                              set_instrf(lexer, "set", "%T%n", (yyvsp[(1) - (3)].targ), (yyvsp[(3) - (3)].dval));

                          get_opinfo(yyscanner);
                        ;}
    break;

  case 162:
#line 1162 "pir.y"
    {
                          set_instrf(lexer, "set", "%T%s", (yyvsp[(1) - (3)].targ), (yyvsp[(3) - (3)].sval));
                          get_opinfo(yyscanner);
                        ;}
    break;

  case 163:
#line 1167 "pir.y"
    {
                          set_instrf(lexer, "set", "%T%T", (yyvsp[(1) - (3)].targ), (yyvsp[(3) - (3)].targ));
                          get_opinfo(yyscanner);
                        ;}
    break;

  case 164:
#line 1172 "pir.y"
    {
                          symbol *sym = find_symbol(lexer, (yyvsp[(3) - (3)].sval));
                          if (sym) {
                              target *rhs = target_from_symbol(lexer, sym);
                              if (!targets_equal((yyvsp[(1) - (3)].targ), rhs)) {
                                  set_instrf(lexer, "set", "%T%T", (yyvsp[(1) - (3)].targ), rhs);
                                  get_opinfo(yyscanner);
                              }
                          }
                          else { /* not a symbol */
                              if (is_parrot_op(lexer, (yyvsp[(3) - (3)].sval))) {
                                  set_instrf(lexer, (yyvsp[(3) - (3)].sval), "%T", (yyvsp[(1) - (3)].targ));
                                  get_opinfo(yyscanner);
                              }
                              else {
                                  yypirerror(yyscanner, lexer, "'%s' is neither a declared symbol "
                                             "nor a parrot opcode", (yyvsp[(3) - (3)].sval));
                              }
                          }
                        ;}
    break;

  case 165:
#line 1193 "pir.y"
    {
                          unshift_operand(lexer, expr_from_target(lexer, (yyvsp[(1) - (3)].targ)));
                          get_opinfo(yyscanner);
                        ;}
    break;

  case 166:
#line 1198 "pir.y"
    {
                          /*   $P0 = foo ["bar"]
                           *
                           * could be PIR sugar for this PASM code:
                           *
                           *    foo $P0, ["bar"]
                           *
                           * but as this sugar is already used for keyed access, the parser
                           * will not allow the former syntax; if there is an op C<foo>,
                           * where the second operand is a key, then this must be written
                           * in PASM style (shown above).
                           */
                          symbol *sym = find_symbol(lexer, (yyvsp[(3) - (4)].sval));
                          target *t;
                          if (sym == NULL) {
                              if (is_parrot_op(lexer, (yyvsp[(3) - (4)].sval))) {
                                  set_instrf(lexer, (yyvsp[(3) - (4)].sval), "%T%E", (yyvsp[(1) - (4)].targ), expr_from_key(lexer, (yyvsp[(4) - (4)].key)));
                                  get_opinfo(yyscanner);
                              }
                              else
                                  yypirerror(yyscanner, lexer,
                                             "indexed object '%s' not declared", (yyvsp[(3) - (4)].sval));

                              /* create a symbol node anyway, so we can continue with instr. gen. */
                              sym = new_symbol(lexer, (yyvsp[(3) - (4)].sval), PMC_TYPE);
                          }
                          else {
                              /* at this point, sym is not NULL, even if there was an error */
                              if (sym->info.type != PMC_TYPE)
                                  yypirerror(yyscanner, lexer,
                                          "indexed object '%s' must be of type 'pmc'", (yyvsp[(3) - (4)].sval));

                              t = target_from_symbol(lexer, sym);
                              set_target_key(t, (yyvsp[(4) - (4)].key));
                              update_instr(lexer, "set");
                              unshift_operand(lexer, expr_from_target(lexer, t));
                              unshift_operand(lexer, expr_from_target(lexer, (yyvsp[(1) - (4)].targ)));
                              get_opinfo(yyscanner);
                          }
                        ;}
    break;

  case 167:
#line 1239 "pir.y"
    {
                          symbol *sym = find_symbol(lexer, (yyvsp[(3) - (4)].sval));
                          target *t;

                          if (sym == NULL) {
                              yypirerror(yyscanner, lexer, "indexed object '%s' not declared", (yyvsp[(3) - (4)].sval));
                              sym = new_symbol(lexer, (yyvsp[(3) - (4)].sval), PMC_TYPE);
                          }
                          else if (sym->info.type != PMC_TYPE)
                              yypirerror(yyscanner, lexer,
                                      "indexed object '%s' must be of type 'pmc'", (yyvsp[(3) - (4)].sval));

                          t = target_from_symbol(lexer, sym);
                          set_target_key(t, (yyvsp[(4) - (4)].key));
                          set_instrf(lexer, "set", "%T%T", (yyvsp[(1) - (4)].targ), t);
                          get_opinfo(yyscanner);
                        ;}
    break;

  case 168:
#line 1257 "pir.y"
    {
                          target *preg = new_reg(lexer, PMC_TYPE, (yyvsp[(3) - (4)].ival));
                          set_target_key(preg, (yyvsp[(4) - (4)].key));
                          set_instrf(lexer, "set", "%T%T", (yyvsp[(1) - (4)].targ), preg);
                          get_opinfo(yyscanner);
                        ;}
    break;

  case 169:
#line 1264 "pir.y"
    {
                          set_instrf(lexer, opnames[(yyvsp[(2) - (3)].ival)], "%T%E", (yyvsp[(1) - (3)].targ), (yyvsp[(3) - (3)].expr));
                          get_opinfo(yyscanner);
                        ;}
    break;

  case 170:
#line 1269 "pir.y"
    {
                          if ((yyvsp[(3) - (3)].ival) == 1)
                              set_instrf(lexer, "inc", "%T", (yyvsp[(1) - (3)].targ));
                          else if ((yyvsp[(3) - (3)].ival) == 0)
                              set_instr(lexer, "noop");
                          else
                              set_instrf(lexer, "add", "%T%i", (yyvsp[(1) - (3)].targ), (yyvsp[(3) - (3)].ival));

                          get_opinfo(yyscanner);
                        ;}
    break;

  case 171:
#line 1280 "pir.y"
    {
                          if ((yyvsp[(3) - (3)].dval) == 1.0)
                              set_instrf(lexer, "inc", "%T", (yyvsp[(1) - (3)].targ));
                          else if ((yyvsp[(3) - (3)].dval) == 0.0)
                              set_instr(lexer, "noop");
                          else
                              set_instrf(lexer, "add", "%T%n", (yyvsp[(1) - (3)].targ), (yyvsp[(3) - (3)].dval));

                          get_opinfo(yyscanner);
                        ;}
    break;

  case 172:
#line 1291 "pir.y"
    {
                          if ((yyvsp[(3) - (3)].ival) == 1)
                              set_instrf(lexer, "dec", "%T", (yyvsp[(1) - (3)].targ));
                          else if ((yyvsp[(3) - (3)].ival) == 0)
                              set_instr(lexer, "noop");
                          else
                              set_instrf(lexer, "sub", "%T%i", (yyvsp[(1) - (3)].targ), (yyvsp[(3) - (3)].ival));

                          get_opinfo(yyscanner);
                        ;}
    break;

  case 173:
#line 1302 "pir.y"
    {
                          if ((yyvsp[(3) - (3)].dval) == 1.0)
                              set_instrf(lexer, "dec", "%T", (yyvsp[(1) - (3)].targ));
                          else if ((yyvsp[(3) - (3)].dval) == 0.0)
                              set_instr(lexer, "noop");
                          else
                              set_instrf(lexer, "sub", "%T%n", (yyvsp[(1) - (3)].targ), (yyvsp[(3) - (3)].dval));

                          get_opinfo(yyscanner);
                        ;}
    break;

  case 174:
#line 1313 "pir.y"
    {
                          set_instrf(lexer, "add", "%T%T", (yyvsp[(1) - (3)].targ), (yyvsp[(3) - (3)].targ));
                          get_opinfo(yyscanner);
                        ;}
    break;

  case 175:
#line 1318 "pir.y"
    {
                          set_instrf(lexer, "sub", "%T%T", (yyvsp[(1) - (3)].targ), (yyvsp[(3) - (3)].targ));
                          get_opinfo(yyscanner);
                        ;}
    break;

  case 176:
#line 1323 "pir.y"
    {
                          set_instrf(lexer, (yyvsp[(3) - (4)].sval), "%T%E", (yyvsp[(1) - (4)].targ), (yyvsp[(4) - (4)].expr));
                          get_opinfo(yyscanner);
                        ;}
    break;

  case 177:
#line 1328 "pir.y"
    {
                          if (targets_equal((yyvsp[(1) - (5)].targ), (yyvsp[(3) - (5)].targ))) /* $P0 = $P0 + $P1 ==> $P0 += $P1 */
                              set_instrf(lexer, opnames[(yyvsp[(4) - (5)].ival)], "%T%E", (yyvsp[(1) - (5)].targ), (yyvsp[(5) - (5)].expr));
                          else
                              set_instrf(lexer, opnames[(yyvsp[(4) - (5)].ival)], "%T%T%E", (yyvsp[(1) - (5)].targ), (yyvsp[(3) - (5)].targ), (yyvsp[(5) - (5)].expr));

                          get_opinfo(yyscanner);
                          do_strength_reduction(yyscanner);
                        ;}
    break;

  case 178:
#line 1338 "pir.y"
    {
                          symbol *sym = find_symbol(lexer, (yyvsp[(1) - (4)].sval));
                          target *t;

                          if (sym == NULL) {
                              yypirerror(yyscanner, lexer, "indexed object '%s' not declared", (yyvsp[(1) - (4)].sval));
                              /* create a dummy symbol so we can continue without seg. faults */
                              sym = new_symbol(lexer, (yyvsp[(1) - (4)].sval), PMC_TYPE);
                          }
                          else if (sym->info.type != PMC_TYPE)
                              yypirerror(yyscanner, lexer,
                                      "indexed object '%s' must be of type 'pmc'", (yyvsp[(1) - (4)].sval));
                          /* at this point sym is a valid (possibly dummy) object for sure */
                          t = target_from_symbol(lexer, sym);
                          set_target_key(t, (yyvsp[(2) - (4)].key));
                          set_instrf(lexer, "set", "%T%E", t, (yyvsp[(4) - (4)].expr));
                          get_opinfo(yyscanner);
                      ;}
    break;

  case 179:
#line 1357 "pir.y"
    {
                          target *preg = new_reg(lexer, PMC_TYPE, (yyvsp[(1) - (4)].ival));
                          set_target_key(preg, (yyvsp[(2) - (4)].key));
                          set_instrf(lexer, "set", "%T%E", preg, (yyvsp[(4) - (4)].expr));
                          get_opinfo(yyscanner);
                        ;}
    break;

  case 180:
#line 1391 "pir.y"
    { set_instrf(lexer, opnames[(yyvsp[(2) - (3)].ival)], "%i%T", (yyvsp[(1) - (3)].ival), (yyvsp[(3) - (3)].targ)); ;}
    break;

  case 181:
#line 1393 "pir.y"
    { set_instrf(lexer, opnames[(yyvsp[(2) - (3)].ival)], "%n%T", (yyvsp[(1) - (3)].dval), (yyvsp[(3) - (3)].targ)); ;}
    break;

  case 182:
#line 1395 "pir.y"
    { set_instrf(lexer, opnames[(yyvsp[(2) - (3)].ival)], "%s%T", (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].targ)); ;}
    break;

  case 183:
#line 1397 "pir.y"
    { set_instrf(lexer, "set", "%C", fold_s_s(yyscanner, (yyvsp[(1) - (3)].sval), (yyvsp[(2) - (3)].ival), (yyvsp[(3) - (3)].sval))); ;}
    break;

  case 184:
#line 1399 "pir.y"
    { set_instrf(lexer, "set", "%C", fold_i_i(yyscanner, (yyvsp[(1) - (3)].ival), (yyvsp[(2) - (3)].ival), (yyvsp[(3) - (3)].ival))); ;}
    break;

  case 185:
#line 1401 "pir.y"
    { set_instrf(lexer, "set", "%C", fold_n_n(yyscanner, (yyvsp[(1) - (3)].dval), (yyvsp[(2) - (3)].ival), (yyvsp[(3) - (3)].dval))); ;}
    break;

  case 186:
#line 1403 "pir.y"
    { set_instrf(lexer, "set", "%C", fold_i_n(yyscanner, (yyvsp[(1) - (3)].ival), (yyvsp[(2) - (3)].ival), (yyvsp[(3) - (3)].dval))); ;}
    break;

  case 187:
#line 1405 "pir.y"
    { set_instrf(lexer, "set", "%C", fold_n_i(yyscanner, (yyvsp[(1) - (3)].dval), (yyvsp[(2) - (3)].ival), (yyvsp[(3) - (3)].ival))); ;}
    break;

  case 188:
#line 1410 "pir.y"
    { get_opinfo(yyscanner); ;}
    break;

  case 189:
#line 1419 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (5)].ival), 1, (yyvsp[(3) - (5)].sval), (yyvsp[(5) - (5)].sval)); ;}
    break;

  case 190:
#line 1421 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (5)].ival), 1, "int", (yyvsp[(5) - (5)].sval)); ;}
    break;

  case 191:
#line 1423 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (5)].ival), 1, "num", (yyvsp[(5) - (5)].sval)); ;}
    break;

  case 192:
#line 1425 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (5)].ival), 1, "pmc", (yyvsp[(5) - (5)].sval)); ;}
    break;

  case 193:
#line 1427 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (5)].ival), 1, "string", (yyvsp[(5) - (5)].sval)); ;}
    break;

  case 194:
#line 1429 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (5)].ival), 1, "if", (yyvsp[(5) - (5)].sval)); ;}
    break;

  case 195:
#line 1431 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (5)].ival), 1, "unless", (yyvsp[(5) - (5)].sval)); ;}
    break;

  case 196:
#line 1433 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (5)].ival), 1, "goto", (yyvsp[(5) - (5)].sval)); ;}
    break;

  case 197:
#line 1435 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (5)].ival), 1, "null", (yyvsp[(5) - (5)].sval)); ;}
    break;

  case 198:
#line 1437 "pir.y"
    {
                          int istrue = evaluate_c(lexer, (yyvsp[(2) - (4)].cval));
                          /* if "unless", invert the true-ness */
                          istrue = (yyvsp[(1) - (4)].ival) ? !istrue : istrue;
                          if (istrue) {
                              set_instrf(lexer, "branch", "%I", (yyvsp[(4) - (4)].sval));
                              set_op_labelflag(lexer, BIT(1));
                          }
                          else
                              set_instr(lexer, "noop");
                        ;}
    break;

  case 199:
#line 1449 "pir.y"
    {
                          set_instrf(lexer, (yyvsp[(1) - (5)].ival) ? "unless_null" : "if_null", "%T%I",
                                     new_reg(lexer, PMC_TYPE, (yyvsp[(3) - (5)].ival)), (yyvsp[(5) - (5)].sval));
                        ;}
    break;

  case 200:
#line 1454 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (4)].ival), 0, (yyvsp[(2) - (4)].sval), (yyvsp[(4) - (4)].sval)); ;}
    break;

  case 201:
#line 1456 "pir.y"
    { set_instrf(lexer, (yyvsp[(1) - (4)].ival) ? "unless" : "if", "%T%I", (yyvsp[(2) - (4)].targ), (yyvsp[(4) - (4)].sval)); ;}
    break;

  case 202:
#line 1458 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (4)].ival), 0, "int", (yyvsp[(4) - (4)].sval)); ;}
    break;

  case 203:
#line 1460 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (4)].ival), 0, "num", (yyvsp[(4) - (4)].sval)); ;}
    break;

  case 204:
#line 1462 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (4)].ival), 0, "pmc", (yyvsp[(4) - (4)].sval)); ;}
    break;

  case 205:
#line 1464 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (4)].ival), 0, "string", (yyvsp[(4) - (4)].sval)); ;}
    break;

  case 206:
#line 1466 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (4)].ival), 0, "if", (yyvsp[(4) - (4)].sval)); ;}
    break;

  case 207:
#line 1468 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (4)].ival), 0, "unless", (yyvsp[(4) - (4)].sval)); ;}
    break;

  case 208:
#line 1470 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (4)].ival), 0, "goto", (yyvsp[(4) - (4)].sval)); ;}
    break;

  case 209:
#line 1472 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (4)].ival), 0, "goto", (yyvsp[(4) - (4)].sval)); ;}
    break;

  case 210:
#line 1474 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (4)].ival), 0, "null", (yyvsp[(4) - (4)].sval)); ;}
    break;

  case 211:
#line 1476 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (4)].ival), 0, "null", (yyvsp[(4) - (4)].sval)); ;}
    break;

  case 212:
#line 1478 "pir.y"
    {
                          if ((yyvsp[(2) - (4)].ival) == COMPUTE_DURING_RUNTIME) {
                             if ((yyvsp[(1) - (4)].ival) == NEED_INVERT_OPNAME) /* "unless" */
                                 invert_instr(lexer);

                             push_operand(lexer, expr_from_ident(lexer, (yyvsp[(4) - (4)].sval)));

                             set_op_labelflag(lexer, BIT(2));
                          }
                          else { /* evaluation during compile time */
                             /* if the result was false but the instr. was "unless", or,
                              * if the result was true and the instr. was "if",
                              * do an unconditional jump.
                              */
                             if (((yyvsp[(2) - (4)].ival) == FALSE && (yyvsp[(1) - (4)].ival) == NEED_INVERT_OPNAME)/* unless false -> jump */
                             ||  ((yyvsp[(2) - (4)].ival) == TRUE  && (yyvsp[(1) - (4)].ival) == DONT_INVERT_OPNAME)) {  /* if true -> jump */
                                set_instrf(lexer, "branch", "%I", (yyvsp[(4) - (4)].sval));
                                set_op_labelflag(lexer, BIT(0));
                             }
                             else                       /* if false, unless true --> do nothing */
                                set_instr(lexer, "noop");

                          }
                        ;}
    break;

  case 213:
#line 1509 "pir.y"
    {
                          /* the instructions "gt" and "ge" are converted to "lt" and "le".
                           * if so, then the arguments must be reversed as well. "lt" and
                           * "le" are 1 position after "gt" and "ge" respectively in the
                           * opnames array; hence the [$2 + 1] index.
                           */

                          /* NOTE: a reference is made here to $<ival>0. This is the <ival> of
                           * $0, which refers to the (non)terminal /before/ the use of
                           * the "condition" rule, in this case "if_unless". If the value
                           * of that non-terminal is in fact "NEED_INVERT_OPNAME", then
                           * we shouldn't do it here, as the inversion of "le" or "lt" is
                           * again "ge" or "gt", and these instructions don't exist.
                           *
                           * Note that this usage is Perfectly Safe, as long as we are sure
                           * that $0 has in fact a <ival>. As "condition" is only used in
                           * exactly one place in the whole grammer, we can be sure of this.
                           */
                          if (((yyvsp[(0) - (3)].ival) != NEED_INVERT_OPNAME) && ((yyvsp[(2) - (3)].ival) == OP_GE || (yyvsp[(2) - (3)].ival) == OP_GT))
                              set_instrf(lexer, opnames[(yyvsp[(2) - (3)].ival) + 1], "%E%T", (yyvsp[(3) - (3)].expr), (yyvsp[(1) - (3)].targ));
                          else
                              set_instrf(lexer, opnames[(yyvsp[(2) - (3)].ival)], "%T%E", (yyvsp[(1) - (3)].targ), (yyvsp[(3) - (3)].expr));

                          (yyval.ival) = COMPUTE_DURING_RUNTIME;  /* indicates this is evaluated at runtime */
                        ;}
    break;

  case 214:
#line 1535 "pir.y"
    {
                          if (((yyvsp[(0) - (3)].ival) != NEED_INVERT_OPNAME) && ((yyvsp[(2) - (3)].ival) == OP_GE || (yyvsp[(2) - (3)].ival) == OP_GT))
                              set_instrf(lexer, opnames[(yyvsp[(2) - (3)].ival) + 1], "%T%i", (yyvsp[(3) - (3)].targ), (yyvsp[(1) - (3)].ival));
                          else
                              set_instrf(lexer, opnames[(yyvsp[(2) - (3)].ival)], "%i%T", (yyvsp[(1) - (3)].ival), (yyvsp[(3) - (3)].targ));
                          (yyval.ival) = COMPUTE_DURING_RUNTIME;
                        ;}
    break;

  case 215:
#line 1543 "pir.y"
    {
                          if (((yyvsp[(0) - (3)].ival) != NEED_INVERT_OPNAME) && ((yyvsp[(2) - (3)].ival) == OP_GE || (yyvsp[(2) - (3)].ival) == OP_GT))
                              set_instrf(lexer, opnames[(yyvsp[(2) - (3)].ival) + 1], "%T%n", (yyvsp[(3) - (3)].targ), (yyvsp[(1) - (3)].dval));
                          else
                              set_instrf(lexer, opnames[(yyvsp[(2) - (3)].ival)], "%n%T", (yyvsp[(1) - (3)].dval), (yyvsp[(3) - (3)].targ));

                          (yyval.ival) = COMPUTE_DURING_RUNTIME;
                        ;}
    break;

  case 216:
#line 1552 "pir.y"
    {
                          if (((yyvsp[(0) - (3)].ival) != NEED_INVERT_OPNAME) && ((yyvsp[(2) - (3)].ival) == OP_GE || (yyvsp[(2) - (3)].ival) == OP_GT))
                              set_instrf(lexer, opnames[(yyvsp[(2) - (3)].ival)], "%T%s", (yyvsp[(3) - (3)].targ), (yyvsp[(1) - (3)].sval));
                          else
                              set_instrf(lexer, opnames[(yyvsp[(2) - (3)].ival)], "%s%T", (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].targ));

                          (yyval.ival) = COMPUTE_DURING_RUNTIME;
                        ;}
    break;

  case 217:
#line 1561 "pir.y"
    { (yyval.ival) = evaluate_i_i((yyvsp[(1) - (3)].ival), (yyvsp[(2) - (3)].ival), (yyvsp[(3) - (3)].ival)); ;}
    break;

  case 218:
#line 1563 "pir.y"
    { (yyval.ival) = evaluate_i_n((yyvsp[(1) - (3)].ival), (yyvsp[(2) - (3)].ival), (yyvsp[(3) - (3)].dval)); ;}
    break;

  case 219:
#line 1565 "pir.y"
    { (yyval.ival) = evaluate_n_i((yyvsp[(1) - (3)].dval), (yyvsp[(2) - (3)].ival), (yyvsp[(3) - (3)].ival)); ;}
    break;

  case 220:
#line 1567 "pir.y"
    { (yyval.ival) = evaluate_n_n((yyvsp[(1) - (3)].dval), (yyvsp[(2) - (3)].ival), (yyvsp[(3) - (3)].dval)); ;}
    break;

  case 221:
#line 1569 "pir.y"
    { (yyval.ival) = evaluate_s_s((yyvsp[(1) - (3)].sval), (yyvsp[(2) - (3)].ival), (yyvsp[(3) - (3)].sval)); ;}
    break;

  case 222:
#line 1573 "pir.y"
    {
                          yypirerror(yyscanner, lexer, "cannot compare string to %s",
                                     (yyvsp[(3) - (3)].ival) == INT_TYPE ? "integer" : "number");
                        ;}
    break;

  case 223:
#line 1578 "pir.y"
    { yypirerror(yyscanner, lexer, "cannot compare integer to string"); ;}
    break;

  case 224:
#line 1580 "pir.y"
    { yypirerror(yyscanner, lexer, "cannot compare number to string"); ;}
    break;

  case 225:
#line 1584 "pir.y"
    { (yyval.ival) = INT_TYPE; ;}
    break;

  case 226:
#line 1585 "pir.y"
    { (yyval.ival) = NUM_TYPE; ;}
    break;

  case 227:
#line 1588 "pir.y"
    { (yyval.ival) = DONT_INVERT_OPNAME; /* no need to invert */ ;}
    break;

  case 228:
#line 1589 "pir.y"
    { (yyval.ival) = NEED_INVERT_OPNAME; /* yes, invert opname */ ;}
    break;

  case 231:
#line 1597 "pir.y"
    {
                          set_instrf(lexer, "branch", "%I", (yyvsp[(2) - (3)].sval));
                          set_op_labelflag(lexer, BIT(0)); /* bit 0 means: "1 << 0" */
                          get_opinfo(yyscanner);
                        ;}
    break;

  case 232:
#line 1605 "pir.y"
    { declare_local(lexer, (yyvsp[(2) - (4)].ival), (yyvsp[(3) - (4)].symb)); ;}
    break;

  case 233:
#line 1609 "pir.y"
    { (yyval.symb) = (yyvsp[(1) - (1)].symb); ;}
    break;

  case 234:
#line 1611 "pir.y"
    { (yyval.symb) = add_local((yyvsp[(1) - (3)].symb), (yyvsp[(3) - (3)].symb)); ;}
    break;

  case 235:
#line 1615 "pir.y"
    { (yyval.symb) = new_local(lexer, (yyvsp[(1) - (2)].sval), (yyvsp[(2) - (2)].ival)); ;}
    break;

  case 236:
#line 1618 "pir.y"
    { (yyval.ival) = 0; ;}
    break;

  case 237:
#line 1619 "pir.y"
    { (yyval.ival) = 1; ;}
    break;

  case 238:
#line 1623 "pir.y"
    { /* if $4 is not a register, it must be a declared symbol */
                          if (!TEST_FLAG((yyvsp[(4) - (5)].targ)->flags, TARGET_FLAG_IS_REG)) {

                              if ((yyvsp[(4) - (5)].targ)->info->type != PMC_TYPE) /* a .lex must be a PMC */
                                  yypirerror(yyscanner, lexer, "lexical '%s' must be of type 'pmc'",
                                             (yyvsp[(4) - (5)].targ)->info->id.name);
                          }
                          set_lex_flag(lexer, (yyvsp[(4) - (5)].targ), (yyvsp[(2) - (5)].sval));
                        ;}
    break;

  case 239:
#line 1638 "pir.y"
    { convert_inv_to_instr(lexer, (yyvsp[(1) - (1)].invo)); ;}
    break;

  case 242:
#line 1650 "pir.y"
    { /* $4 contains an invocation object */
                              set_invocation_args(lexer, (yyvsp[(4) - (8)].invo), (yyvsp[(3) - (8)].argm));
                              (yyval.invo) = set_invocation_results(lexer, (yyvsp[(4) - (8)].invo), (yyvsp[(6) - (8)].targ));
                            ;}
    break;

  case 243:
#line 1657 "pir.y"
    { (yyval.argm) = NULL; ;}
    break;

  case 244:
#line 1659 "pir.y"
    { (yyval.argm) = (yyvsp[(1) - (1)].argm); ;}
    break;

  case 245:
#line 1663 "pir.y"
    { (yyval.argm) = (yyvsp[(1) - (1)].argm); ;}
    break;

  case 246:
#line 1665 "pir.y"
    { (yyval.argm) = add_arg((yyvsp[(1) - (2)].argm), (yyvsp[(2) - (2)].argm)); ;}
    break;

  case 247:
#line 1669 "pir.y"
    { (yyval.argm) = (yyvsp[(2) - (3)].argm); ;}
    break;

  case 248:
#line 1673 "pir.y"
    { (yyval.invo) = invoke(lexer, CALL_PCC, (yyvsp[(2) - (3)].targ), (yyvsp[(3) - (3)].targ)); ;}
    break;

  case 249:
#line 1675 "pir.y"
    { (yyval.invo) = invoke(lexer, CALL_NCI, (yyvsp[(2) - (2)].targ)); ;}
    break;

  case 250:
#line 1678 "pir.y"
    { (yyval.invo) = invoke(lexer, CALL_METHOD, (yyvsp[(2) - (5)].targ), (yyvsp[(5) - (5)].expr)); ;}
    break;

  case 251:
#line 1682 "pir.y"
    { (yyval.targ) = NULL; ;}
    break;

  case 252:
#line 1684 "pir.y"
    { (yyval.targ) = (yyvsp[(2) - (2)].targ); ;}
    break;

  case 253:
#line 1688 "pir.y"
    { (yyval.targ) = NULL; ;}
    break;

  case 254:
#line 1690 "pir.y"
    { (yyval.targ) = (yyvsp[(1) - (1)].targ); ;}
    break;

  case 255:
#line 1694 "pir.y"
    { (yyval.targ) = (yyvsp[(1) - (1)].targ); ;}
    break;

  case 256:
#line 1696 "pir.y"
    {
                             if ((yyvsp[(2) - (2)].targ))
                                 (yyval.targ) = add_target(lexer, (yyvsp[(1) - (2)].targ), (yyvsp[(2) - (2)].targ));
                             else
                                 (yyval.targ) = (yyvsp[(1) - (2)].targ)
                           ;}
    break;

  case 257:
#line 1705 "pir.y"
    { (yyval.targ) = (yyvsp[(2) - (3)].targ); ;}
    break;

  case 258:
#line 1707 "pir.y"
    { (yyval.targ) = NULL; ;}
    break;

  case 260:
#line 1715 "pir.y"
    { (yyval.invo) = set_invocation_results(lexer, (yyvsp[(3) - (3)].invo), (yyvsp[(1) - (3)].targ)); ;}
    break;

  case 261:
#line 1717 "pir.y"
    { (yyval.invo) = set_invocation_results(lexer, (yyvsp[(3) - (3)].invo), (yyvsp[(1) - (3)].targ)); ;}
    break;

  case 262:
#line 1719 "pir.y"
    {  (yyval.invo) = set_invocation_results(lexer, (yyvsp[(1) - (1)].invo), NULL); ;}
    break;

  case 265:
#line 1727 "pir.y"
    {
                             /* if $1 is not a register, check whether the symbol was declared */
                             if (!TEST_FLAG((yyvsp[(1) - (4)].targ)->flags, TARGET_FLAG_IS_REG)) {

                                 symbol *sym = find_symbol(lexer, (yyvsp[(1) - (4)].targ)->info->id.name);
                                 if (sym == NULL)
                                     yypirerror(yyscanner, lexer,
                                             "symbol '%s' was not declared", (yyvsp[(1) - (4)].targ)->info->id.name);
                                 else if ((yyvsp[(1) - (4)].targ)->info->type != PMC_TYPE)
                                     yypirerror(yyscanner, lexer,
                                             "cannot invoke method: '%s' is not of type 'pmc'",
                                             (yyvsp[(1) - (4)].targ)->info->id.name);
                             }

                             (yyval.invo) = invoke(lexer, CALL_METHOD, (yyvsp[(1) - (4)].targ), (yyvsp[(3) - (4)].expr));
                             set_invocation_args(lexer, (yyval.invo), (yyvsp[(4) - (4)].argm));
                           ;}
    break;

  case 266:
#line 1747 "pir.y"
    {
                             (yyval.invo) = invoke(lexer, CALL_PCC, (yyvsp[(1) - (2)].targ), NULL);
                             set_invocation_args(lexer, (yyval.invo), (yyvsp[(2) - (2)].argm));
                           ;}
    break;

  case 267:
#line 1754 "pir.y"
    { (yyval.targ) = (yyvsp[(1) - (1)].targ); ;}
    break;

  case 268:
#line 1756 "pir.y"
    {
                             symbol *sym = find_symbol(lexer, (yyvsp[(1) - (1)].sval));
                             if (sym == NULL)
                                 sym = new_symbol(lexer, (yyvsp[(1) - (1)].sval), PMC_TYPE);

                             (yyval.targ) = target_from_symbol(lexer, sym);
                           ;}
    break;

  case 269:
#line 1766 "pir.y"
    { /* check that this identifier was declared */
                             symbol *sym = find_symbol(lexer, (yyvsp[(1) - (1)].sval));

                             if (sym == NULL) {
                                yypirerror(yyscanner, lexer,
                                        "method identifier '%s' not declared", (yyvsp[(1) - (1)].sval));
                                /* make sure sym is not NULL */
                                sym = new_symbol(lexer, (yyvsp[(1) - (1)].sval), PMC_TYPE);
                             }
                             else if (sym->info.type != PMC_TYPE
                                  &&  sym->info.type != STRING_TYPE)
                                 yypirerror(yyscanner, lexer,
                                         "method '%s' must be of type 'pmc' or 'string'", (yyvsp[(1) - (1)].sval));

                             (yyval.expr) = expr_from_target(lexer, target_from_symbol(lexer, sym));
                           ;}
    break;

  case 270:
#line 1783 "pir.y"
    { (yyval.expr) = expr_from_target(lexer, new_reg(lexer, PMC_TYPE, (yyvsp[(1) - (1)].ival))); ;}
    break;

  case 271:
#line 1785 "pir.y"
    { (yyval.expr) = expr_from_target(lexer, new_reg(lexer, STRING_TYPE, (yyvsp[(1) - (1)].ival))); ;}
    break;

  case 272:
#line 1787 "pir.y"
    { (yyval.expr) = expr_from_const(lexer, new_const(lexer, STRING_TYPE, (yyvsp[(1) - (1)].sval))); ;}
    break;

  case 273:
#line 1791 "pir.y"
    {
                             symbol *sym = find_symbol(lexer, (yyvsp[(1) - (1)].sval));
                             if (sym == NULL)
                                 sym = new_symbol(lexer, (yyvsp[(1) - (1)].sval), PMC_TYPE);

                             (yyval.targ) = target_from_symbol(lexer, sym);

                           ;}
    break;

  case 274:
#line 1800 "pir.y"
    { (yyval.targ) = new_reg(lexer, PMC_TYPE, (yyvsp[(1) - (1)].ival)); ;}
    break;

  case 275:
#line 1805 "pir.y"
    {
                             (yyval.targ) = (yyvsp[(2) - (3)].targ);
                           ;}
    break;

  case 276:
#line 1811 "pir.y"
    { (yyval.targ) = NULL; ;}
    break;

  case 277:
#line 1813 "pir.y"
    { (yyval.targ) = (yyvsp[(1) - (1)].targ); ;}
    break;

  case 278:
#line 1817 "pir.y"
    { (yyval.targ) = (yyvsp[(1) - (1)].targ); ;}
    break;

  case 279:
#line 1819 "pir.y"
    { (yyval.targ) = add_target(lexer, (yyvsp[(1) - (3)].targ), (yyvsp[(3) - (3)].targ)); ;}
    break;

  case 280:
#line 1823 "pir.y"
    { (yyval.targ) = set_param_flag(lexer, (yyvsp[(1) - (2)].targ), (yyvsp[(2) - (2)].ival)); ;}
    break;

  case 281:
#line 1825 "pir.y"
    { (yyval.targ) = set_param_alias(lexer, (yyvsp[(1) - (3)].sval)); ;}
    break;

  case 282:
#line 1829 "pir.y"
    { (yyval.ival) = 0; ;}
    break;

  case 283:
#line 1831 "pir.y"
    { SET_FLAG((yyval.ival), (yyvsp[(2) - (2)].ival)); ;}
    break;

  case 284:
#line 1835 "pir.y"
    { (yyval.ival) = TARGET_FLAG_OPTIONAL; ;}
    break;

  case 285:
#line 1837 "pir.y"
    { (yyval.ival) = TARGET_FLAG_OPT_FLAG; ;}
    break;

  case 286:
#line 1839 "pir.y"
    { (yyval.ival) = TARGET_FLAG_SLURPY; ;}
    break;

  case 287:
#line 1841 "pir.y"
    {
                             (yyval.ival) = TARGET_FLAG_NAMED;
                             set_param_alias(lexer, (yyvsp[(2) - (2)].sval));
                           ;}
    break;

  case 288:
#line 1851 "pir.y"
    { convert_inv_to_instr(lexer, (yyvsp[(1) - (1)].invo)); ;}
    break;

  case 293:
#line 1861 "pir.y"
    {
                              (yyval.invo) = invoke(lexer, CALL_RETURN);
                              set_invocation_args(lexer, (yyval.invo), (yyvsp[(2) - (3)].argm));
                            ;}
    break;

  case 294:
#line 1866 "pir.y"
    { /* was the invocation a method call? then it becomes a method tail
                               * call, otherwise it's just a normal (sub) tail call.
                               */
                              set_invocation_type((yyvsp[(2) - (3)].invo), ((yyvsp[(2) - (3)].invo)->type == CALL_METHOD)
                                                      ? CALL_METHOD_TAILCALL
                                                      : CALL_TAILCALL);
                              (yyval.invo) = (yyvsp[(2) - (3)].invo);
                            ;}
    break;

  case 295:
#line 1877 "pir.y"
    {
                              (yyval.invo) = invoke(lexer, CALL_YIELD);
                              set_invocation_args(lexer, (yyval.invo), (yyvsp[(2) - (3)].argm));
                            ;}
    break;

  case 296:
#line 1884 "pir.y"
    { (yyval.argm) = (yyvsp[(2) - (3)].argm); ;}
    break;

  case 297:
#line 1888 "pir.y"
    { (yyval.argm) = NULL; ;}
    break;

  case 298:
#line 1890 "pir.y"
    { (yyval.argm) = (yyvsp[(1) - (1)].argm); ;}
    break;

  case 299:
#line 1894 "pir.y"
    { (yyval.argm) = (yyvsp[(1) - (1)].argm); ;}
    break;

  case 300:
#line 1896 "pir.y"
    { (yyval.argm) = add_arg((yyvsp[(1) - (3)].argm), (yyvsp[(3) - (3)].argm)); ;}
    break;

  case 303:
#line 1904 "pir.y"
    { (yyval.argm) = set_arg_alias(lexer, (yyvsp[(1) - (3)].sval)); ;}
    break;

  case 304:
#line 1908 "pir.y"
    { (yyval.argm) = set_arg_flag((yyval.argm), (yyvsp[(2) - (2)].ival)); ;}
    break;

  case 305:
#line 1912 "pir.y"
    { (yyval.argm) = set_curarg(lexer, new_argument(lexer, (yyvsp[(1) - (1)].expr)));  ;}
    break;

  case 306:
#line 1918 "pir.y"
    {
                              (yyval.invo) = invoke(lexer, CALL_RETURN);
                              set_invocation_args(lexer, (yyval.invo), (yyvsp[(3) - (5)].argm));
                            ;}
    break;

  case 307:
#line 1927 "pir.y"
    {
                              (yyval.invo) = invoke(lexer, CALL_YIELD);
                              set_invocation_args(lexer, (yyval.invo), (yyvsp[(3) - (5)].argm));
                            ;}
    break;

  case 308:
#line 1934 "pir.y"
    { (yyval.argm) = NULL; ;}
    break;

  case 309:
#line 1936 "pir.y"
    { (yyval.argm) = (yyvsp[(1) - (1)].argm); ;}
    break;

  case 310:
#line 1941 "pir.y"
    { (yyval.argm) = (yyvsp[(1) - (1)].argm); ;}
    break;

  case 311:
#line 1943 "pir.y"
    { (yyval.argm) = add_arg((yyvsp[(1) - (2)].argm), (yyvsp[(2) - (2)].argm)); ;}
    break;

  case 312:
#line 1948 "pir.y"
    { (yyval.argm) = (yyvsp[(2) - (3)].argm); ;}
    break;

  case 313:
#line 1952 "pir.y"
    { (yyval.argm) = NULL; ;}
    break;

  case 314:
#line 1954 "pir.y"
    { (yyval.argm) = (yyvsp[(1) - (1)].argm); ;}
    break;

  case 315:
#line 1958 "pir.y"
    { (yyval.argm) = (yyvsp[(1) - (1)].argm); ;}
    break;

  case 316:
#line 1960 "pir.y"
    { (yyval.argm) = add_arg((yyvsp[(1) - (2)].argm), (yyvsp[(2) - (2)].argm)); ;}
    break;

  case 317:
#line 1964 "pir.y"
    { (yyval.argm) = (yyvsp[(2) - (3)].argm); ;}
    break;

  case 318:
#line 1969 "pir.y"
    { (yyval.ival) = 0; ;}
    break;

  case 319:
#line 1971 "pir.y"
    { SET_FLAG((yyval.ival), (yyvsp[(2) - (2)].ival)); ;}
    break;

  case 320:
#line 1975 "pir.y"
    { (yyval.ival) = ARG_FLAG_FLAT; ;}
    break;

  case 321:
#line 1977 "pir.y"
    {
                               (yyval.ival) = ARG_FLAG_NAMED;
                               set_arg_alias(lexer, (yyvsp[(2) - (2)].sval));
                             ;}
    break;

  case 322:
#line 1984 "pir.y"
    { (yyval.sval) = NULL; ;}
    break;

  case 323:
#line 1986 "pir.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 324:
#line 1990 "pir.y"
    { (yyval.sval) = (yyvsp[(2) - (3)].sval); ;}
    break;

  case 328:
#line 2001 "pir.y"
    { store_global_constant(lexer, (yyvsp[(2) - (2)].cval)); ;}
    break;

  case 329:
#line 2005 "pir.y"
    { /* XXX is .globalconst to be kept? */ ;}
    break;

  case 330:
#line 2009 "pir.y"
    { (yyval.cval) = new_named_const(lexer, INT_TYPE, (yyvsp[(2) - (4)].sval), (yyvsp[(4) - (4)].ival)); ;}
    break;

  case 331:
#line 2011 "pir.y"
    { (yyval.cval) = new_named_const(lexer, NUM_TYPE, (yyvsp[(2) - (4)].sval), (yyvsp[(4) - (4)].dval)); ;}
    break;

  case 332:
#line 2013 "pir.y"
    { (yyval.cval) = new_named_const(lexer, STRING_TYPE, (yyvsp[(2) - (4)].sval), (yyvsp[(4) - (4)].sval)); ;}
    break;

  case 333:
#line 2015 "pir.y"
    { (yyval.cval) = new_pmc_const((yyvsp[(1) - (4)].sval), (yyvsp[(2) - (4)].sval), (yyvsp[(4) - (4)].cval)); ;}
    break;

  case 334:
#line 2022 "pir.y"
    { (yyval.expr) = expr_from_target(lexer, (yyvsp[(1) - (1)].targ)); ;}
    break;

  case 335:
#line 2023 "pir.y"
    { (yyval.expr) = expr_from_const(lexer, (yyvsp[(1) - (1)].cval)); ;}
    break;

  case 336:
#line 2027 "pir.y"
    { (yyval.cval) = new_const(lexer, STRING_TYPE, (yyvsp[(1) - (1)].sval)); ;}
    break;

  case 337:
#line 2028 "pir.y"
    { (yyval.cval) = new_const(lexer, INT_TYPE, (yyvsp[(1) - (1)].ival)); ;}
    break;

  case 338:
#line 2029 "pir.y"
    { (yyval.cval) = new_const(lexer, NUM_TYPE, (yyvsp[(1) - (1)].dval)); ;}
    break;

  case 339:
#line 2030 "pir.y"
    { (yyval.cval) = (yyvsp[(1) - (1)].cval); ;}
    break;

  case 340:
#line 2033 "pir.y"
    { (yyval.ival) = OP_NE; ;}
    break;

  case 341:
#line 2034 "pir.y"
    { (yyval.ival) = OP_EQ; ;}
    break;

  case 342:
#line 2035 "pir.y"
    { (yyval.ival) = OP_LT; ;}
    break;

  case 343:
#line 2036 "pir.y"
    { (yyval.ival) = OP_LE; ;}
    break;

  case 344:
#line 2037 "pir.y"
    { (yyval.ival) = OP_GE; ;}
    break;

  case 345:
#line 2038 "pir.y"
    { (yyval.ival) = OP_GT; ;}
    break;

  case 346:
#line 2041 "pir.y"
    { (yyval.ival) = INT_TYPE; ;}
    break;

  case 347:
#line 2042 "pir.y"
    { (yyval.ival) = NUM_TYPE; ;}
    break;

  case 348:
#line 2043 "pir.y"
    { (yyval.ival) = PMC_TYPE; ;}
    break;

  case 349:
#line 2044 "pir.y"
    { (yyval.ival) = STRING_TYPE; ;}
    break;

  case 350:
#line 2052 "pir.y"
    { set_curtarget(lexer, (yyvsp[(1) - (1)].targ));  ;}
    break;

  case 352:
#line 2056 "pir.y"
    { /* a symbol must have been declared; check that at this point. */
                           symbol * sym = find_symbol(lexer, (yyvsp[(1) - (1)].sval));
                           if (sym == NULL) {
                               undeclared_symbol(yyscanner, lexer, (yyvsp[(1) - (1)].sval));
                               /* make sure sym is not NULL */
                               sym = new_symbol(lexer, (yyvsp[(1) - (1)].sval), UNKNOWN_TYPE);
                           }
                           (yyval.targ) = target_from_symbol(lexer, sym);
                         ;}
    break;

  case 353:
#line 2067 "pir.y"
    { (yyval.targ) = new_reg(lexer, PMC_TYPE, (yyvsp[(1) - (1)].ival));    ;}
    break;

  case 354:
#line 2068 "pir.y"
    { (yyval.targ) = new_reg(lexer, NUM_TYPE, (yyvsp[(1) - (1)].ival));    ;}
    break;

  case 355:
#line 2069 "pir.y"
    { (yyval.targ) = new_reg(lexer, INT_TYPE, (yyvsp[(1) - (1)].ival));    ;}
    break;

  case 356:
#line 2070 "pir.y"
    { (yyval.targ) = new_reg(lexer, STRING_TYPE, (yyvsp[(1) - (1)].ival)); ;}
    break;

  case 359:
#line 2078 "pir.y"
    { (yyval.sval) = "if"; ;}
    break;

  case 360:
#line 2079 "pir.y"
    { (yyval.sval) = "unless"; ;}
    break;

  case 361:
#line 2080 "pir.y"
    { (yyval.sval) = "goto"; ;}
    break;

  case 362:
#line 2081 "pir.y"
    { (yyval.sval) = "int"; ;}
    break;

  case 363:
#line 2082 "pir.y"
    { (yyval.sval) = "num"; ;}
    break;

  case 364:
#line 2083 "pir.y"
    { (yyval.sval) = "string"; ;}
    break;

  case 365:
#line 2084 "pir.y"
    { (yyval.sval) = "pmc"; ;}
    break;

  case 366:
#line 2085 "pir.y"
    { (yyval.sval) = "null"; ;}
    break;

  case 367:
#line 2088 "pir.y"
    { (yyval.sval) = "neg"; ;}
    break;

  case 368:
#line 2089 "pir.y"
    { (yyval.sval) = "not"; ;}
    break;

  case 369:
#line 2090 "pir.y"
    { (yyval.sval) = "bnot"; ;}
    break;

  case 370:
#line 2093 "pir.y"
    { (yyval.ival) = OP_ADD; ;}
    break;

  case 371:
#line 2094 "pir.y"
    { (yyval.ival) = OP_SUB; ;}
    break;

  case 372:
#line 2095 "pir.y"
    { (yyval.ival) = OP_DIV; ;}
    break;

  case 373:
#line 2096 "pir.y"
    { (yyval.ival) = OP_MUL; ;}
    break;

  case 374:
#line 2097 "pir.y"
    { (yyval.ival) = OP_MOD; ;}
    break;

  case 375:
#line 2098 "pir.y"
    { (yyval.ival) = OP_BOR; ;}
    break;

  case 376:
#line 2099 "pir.y"
    { (yyval.ival) = OP_BAND; ;}
    break;

  case 377:
#line 2100 "pir.y"
    { (yyval.ival) = OP_BXOR; ;}
    break;

  case 378:
#line 2101 "pir.y"
    { (yyval.ival) = OP_POW; ;}
    break;

  case 379:
#line 2102 "pir.y"
    { (yyval.ival) = OP_CONCAT; ;}
    break;

  case 380:
#line 2103 "pir.y"
    { (yyval.ival) = OP_LSR; ;}
    break;

  case 381:
#line 2104 "pir.y"
    { (yyval.ival) = OP_SHR; ;}
    break;

  case 382:
#line 2105 "pir.y"
    { (yyval.ival) = OP_SHL; ;}
    break;

  case 383:
#line 2106 "pir.y"
    { (yyval.ival) = OP_OR; ;}
    break;

  case 384:
#line 2107 "pir.y"
    { (yyval.ival) = OP_AND; ;}
    break;

  case 385:
#line 2108 "pir.y"
    { (yyval.ival) = OP_FDIV; ;}
    break;

  case 386:
#line 2109 "pir.y"
    { (yyval.ival) = OP_XOR; ;}
    break;

  case 387:
#line 2110 "pir.y"
    { (yyval.ival) = OP_ISEQ; ;}
    break;

  case 388:
#line 2111 "pir.y"
    { (yyval.ival) = OP_ISLE; ;}
    break;

  case 389:
#line 2112 "pir.y"
    { (yyval.ival) = OP_ISLT; ;}
    break;

  case 390:
#line 2113 "pir.y"
    { (yyval.ival) = OP_ISGE; ;}
    break;

  case 391:
#line 2114 "pir.y"
    { (yyval.ival) = OP_ISGT; ;}
    break;

  case 392:
#line 2115 "pir.y"
    { (yyval.ival) = OP_ISNE; ;}
    break;

  case 393:
#line 2121 "pir.y"
    { (yyval.ival) = OP_MUL; ;}
    break;

  case 394:
#line 2122 "pir.y"
    { (yyval.ival) = OP_MOD; ;}
    break;

  case 395:
#line 2123 "pir.y"
    { (yyval.ival) = OP_POW; ;}
    break;

  case 396:
#line 2124 "pir.y"
    { (yyval.ival) = OP_DIV; ;}
    break;

  case 397:
#line 2125 "pir.y"
    { (yyval.ival) = OP_FDIV; ;}
    break;

  case 398:
#line 2126 "pir.y"
    { (yyval.ival) = OP_BOR; ;}
    break;

  case 399:
#line 2127 "pir.y"
    { (yyval.ival) = OP_BAND; ;}
    break;

  case 400:
#line 2128 "pir.y"
    { (yyval.ival) = OP_BXOR; ;}
    break;

  case 401:
#line 2129 "pir.y"
    { (yyval.ival) = OP_CONCAT; ;}
    break;

  case 402:
#line 2130 "pir.y"
    { (yyval.ival) = OP_SHR; ;}
    break;

  case 403:
#line 2131 "pir.y"
    { (yyval.ival) = OP_SHL; ;}
    break;

  case 404:
#line 2132 "pir.y"
    { (yyval.ival) = OP_LSR; ;}
    break;

  case 406:
#line 2153 "pir.y"
    { new_subr(lexer, "@start"); ;}
    break;

  case 415:
#line 2169 "pir.y"
    { set_label(lexer, (yyvsp[(1) - (2)].sval)); ;}
    break;

  case 420:
#line 2179 "pir.y"
    { set_sub_name(lexer, (yyvsp[(3) - (3)].sval)); ;}
    break;

  case 421:
#line 2183 "pir.y"
    { new_subr(lexer, NULL); ;}
    break;

  case 422:
#line 2188 "pir.y"
    {
                                  if (is_parrot_op(lexer, (yyvsp[(1) - (3)].sval)))
                                      get_opinfo(yyscanner);
                                  else /* not a parrot op */
                                      yypirerror(yyscanner, lexer, "'%s' is not a parrot op", (yyvsp[(1) - (3)].sval));

                                ;}
    break;


/* Line 1267 of yacc.c.  */
#line 4727 "pirparser.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (yyscanner, lexer, YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yyscanner, lexer, yymsg);
	  }
	else
	  {
	    yyerror (yyscanner, lexer, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval, yyscanner, lexer);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yyscanner, lexer);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (yyscanner, lexer, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, yyscanner, lexer);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yyscanner, lexer);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 2199 "pir.y"




/* the order of these letters match with the pir_type enumeration.
 * These are used for generating the full opname (set I0, 10 -> set_i_ic).
 */
static char const type_codes[5] = {'i', 's', 'p', 'n', '?'};


/*

=head1 FUNCTIONS

=over 4

=item C<static constant *
fold_i_i(yyscan_t yyscanner, int a, pir_math_operator op, int b)>

Evaluates the expression C<a op b> and returns a constant node
containing the result value. Both C<a> and C<b> are integer values.

=cut

*/
PARROT_WARN_UNUSED_RESULT
PARROT_CANNOT_RETURN_NULL
static constant *
fold_i_i(yyscan_t yyscanner, int a, pir_math_operator op, int b) {
    int result = 0;

    switch (op) {
        case OP_ADD:
            result = a + b;
            break;
        case OP_SUB:
            result = a - b;
            break;
        case OP_DIV:
            if (b == 0)
                yypirerror(yyscanner, (lexer_state * const)yypirget_extra(yyscanner),
                           "cannot divide by 0!");
            else
                result = a / b;
            break;
        case OP_MUL:
            result = a * b;
            break;
        case OP_MOD:
            result = a % b;
            break;
        case OP_BOR:
            result = (a | b);
            break;
        case OP_BAND:
            result = (a & b);
            break;
        case OP_BXOR:
            result = (a ^ b);
            break;
        case OP_POW:
            /* is this cast safe? -- w.r.t. limits of int range. */
            result = (int)pow(a, b);
            break;
        case OP_CONCAT:
            yypirerror(yyscanner, (lexer_state * const)yypirget_extra(yyscanner),
                    "cannot concatenate operands of type 'int' and 'int'");
            break;
        case OP_LSR:
            /* from bits.ops: $1 = (INTVAL)((UINTVAL)$2 >> $3); */
            result = (int)((unsigned)a >> b);
            break;
        case OP_SHR:
            result = a >> b;
            break;
        case OP_SHL:
            result = a << b;
            break;
        case OP_OR:
            result = (a || b);
            break;
        case OP_AND:
            result = (a && b);
            break;
        case OP_FDIV:
            /* 7 // 2 -> 3, this is what integer division does (rounding down to whole integers) */
            result = a / b;
            break;
        case OP_XOR:
            result = a ^ b;
            break;
        case OP_ISEQ:
            result = (a == b);
            break;
        case OP_ISLE:
            result = (a <= b);
            break;
        case OP_ISLT:
            result = (a < b);
            break;
        case OP_ISGE:
            result = (a >= b);
            break;
        case OP_ISGT:
            result = (a > b);
            break;
        case OP_ISNE:
            result = (a != b);
            break;

        default:
            panic((lexer_state *)yypirget_extra(yyscanner),
                  "detected 'inc' or 'dec' in fold_i_i()");
            break;
    }
    return new_const((lexer_state * const)yypirget_extra(yyscanner), INT_TYPE, result);
}

/*

=item C<static constant *
fold_n_i(yyscan_t yyscanner, double a, pir_math_operator op, int b)>

Same as C<fold_i_i>, except C<a> is of type double.

=cut

*/
PARROT_WARN_UNUSED_RESULT
PARROT_CANNOT_RETURN_NULL
static constant *
fold_n_i(yyscan_t yyscanner, double a, pir_math_operator op, int b) {
    double result = 0;
    switch (op) {
        case OP_ADD:
            result = a + b;
            break;
        case OP_SUB:
            result = a - b;
            break;
        case OP_DIV:
            if (b == 0)
                yypirerror(yyscanner, (lexer_state * const)yypirget_extra(yyscanner),
                           "cannot divide by 0!");
            else
                result = a / b;
            break;
        case OP_MUL:
            result = a * b;
            break;
        case OP_MOD:
        case OP_BOR:
        case OP_BAND:
        case OP_BXOR:
        case OP_SHR:
        case OP_SHL:
        case OP_LSR:
        case OP_XOR:
        case OP_CONCAT:
            yypirerror(yyscanner, (lexer_state * const)yypirget_extra(yyscanner),
                    "cannot apply binary operator '%s' to types 'num' and 'int'", opnames[op]);
            break;
        case OP_POW:
            result = pow(a, b);
            break;
        case OP_OR:
            result = (a || b);
            break;
        case OP_AND:
            result = (a && b);
            break;
        case OP_FDIV:
            result = floor(a / b);
            break;
        case OP_ISEQ:
            result = (a == b);
            break;
        case OP_ISLE:
            result = (a <= b);
            break;
        case OP_ISLT:
            result = (a < b);
            break;
        case OP_ISGE:
            result = (a >= b);
            break;
        case OP_ISGT:
            result = (a > b);
            break;
        case OP_ISNE:
            result = (a != b);
            break;

        /* OP_INC and OP_DEC are here only to keep the C compiler happy */
        default:
            panic((lexer_state *)yypirget_extra(yyscanner),
                  "detected 'inc' or 'dec' in fold_n_i()");
            break;
    }
    return new_const((lexer_state * const)yypirget_extra(yyscanner), NUM_TYPE, result);
}

/*

=item C<static constant *
fold_i_n(yyscan_t yyscanner, int a, pir_math_operator op, double b)>

Same as C<fold_i_i>, except C<b> is of type double.

=cut

*/
PARROT_WARN_UNUSED_RESULT
PARROT_CANNOT_RETURN_NULL
static constant *
fold_i_n(yyscan_t yyscanner, int a, pir_math_operator op, double b) {
    double result = 0;

    switch (op) {
        case OP_ADD:
            result = a + b;
            break;
        case OP_SUB:
            result = a - b;
            break;
        case OP_DIV:
            if (b == 0)
                yypirerror(yyscanner, (lexer_state * const)yypirget_extra(yyscanner),
                           "cannot divide by 0!");
            else
                result = a / b;
            break;
        case OP_MUL:
            result = a * b;
            break;
        case OP_MOD:
        case OP_BOR:
        case OP_BAND:
        case OP_BXOR:
        case OP_LSR:
        case OP_SHR:
        case OP_SHL:
        case OP_XOR:
        case OP_CONCAT:
            yypirerror(yyscanner, (lexer_state * const)yypirget_extra(yyscanner),
                    "cannot apply binary operator '%s' to types 'int' and 'num'", opnames[op]);
            break;
        case OP_POW:
            result = pow(a, b);
            break;
        case OP_OR:
            result = (a || b);
            break;
        case OP_AND:
            result = (a && b);
            break;
        case OP_FDIV:
            result = floor(a / b);
            break;
        case OP_ISEQ:
            result = (a == b);
            break;
        case OP_ISLE:
            result = (a <= b);
            break;
        case OP_ISLT:
            result = (a < b);
            break;
        case OP_ISGE:
            result = (a >= b);
            break;
        case OP_ISGT:
            result = (a > b);
            break;
        case OP_ISNE:
            result = (a != b);
            break;

        default:
            panic((lexer_state *)yypirget_extra(yyscanner),
                  "detected 'inc' or 'dec' in fold_i_n()");
            break;
    }
    return new_const((lexer_state * const)yypirget_extra(yyscanner), NUM_TYPE, result);
}

/*

=item C<static constant *
fold_n_n(yyscan_t yyscanner, double a, pir_math_operator op, double b)>

Same as C<fold_i_i>, except that both C<a> and C<b> are of type double.

=cut

*/
PARROT_WARN_UNUSED_RESULT
PARROT_CANNOT_RETURN_NULL
static constant *
fold_n_n(yyscan_t yyscanner, double a, pir_math_operator op, double b) {
    double result = 0;
    switch (op) {
        case OP_ADD:
            result = a + b;
            break;
        case OP_SUB:
            result = a - b;
            break;
        case OP_DIV:
            if (b == 0) /* throw exception ? */
                yypirerror(yyscanner, (lexer_state * const)yypirget_extra(yyscanner),
                           "cannot divide by 0");
            else
                result = a / b;
            break;
        case OP_MUL:
            result = a * b;
            break;
        case OP_POW:
            result = pow(a, b);
            break;
        case OP_MOD:
        case OP_BOR:
        case OP_BAND:
        case OP_BXOR:
        case OP_CONCAT:
        case OP_LSR:
        case OP_SHR:
        case OP_SHL:
        case OP_XOR:
            yypirerror(yyscanner, (lexer_state * const)yypirget_extra(yyscanner),
                    "cannot apply binary operator '%s' to arguments of type number", opnames[op]);
            break;
        case OP_OR:
            result = (a || b);
            break;
        case OP_AND:
            result = (a && b);
            break;
        case OP_FDIV:
            if (b == 0)
                yypirerror(yyscanner, (lexer_state * const)yypirget_extra(yyscanner),
                           "cannot divide by 0");
            else
                result = floor(a / b);
            break;
        case OP_ISEQ:
            result = (a == b);
            break;
        case OP_ISLE:
            result = (a <= b);
            break;
        case OP_ISLT:
            result = (a < b);
            break;
        case OP_ISGE:
            result = (a >= b);
            break;
        case OP_ISGT:
            result = (a > b);
            break;
        case OP_ISNE:
            result = (a != b);
            break;

        default:
            break;
    }
    return new_const((lexer_state * const)yypirget_extra(yyscanner), NUM_TYPE, result);
}

/*

=item C<static constant *
fold_s_s(yyscan_t yyscanner, char *a, pir_math_operator op, char *b)>

Evaluate the expression C<a op b>, where both C<a> and C<b> are
strings. Only the concatenation and comparison operators are implemented;
other operators will result in an error.

=cut

*/
PARROT_WARN_UNUSED_RESULT
PARROT_CANNOT_RETURN_NULL
static constant *
fold_s_s(yyscan_t yyscanner, NOTNULL(char const *a), pir_math_operator op, NOTNULL(char const *b)) {
    lexer_state *lexer = (lexer_state *)yypirget_extra(yyscanner);
    switch (op) {
        case OP_CONCAT:
            return new_const(lexer, STRING_TYPE, concat_strings(lexer, a, b));

        case OP_ADD:
        case OP_SUB:
        case OP_DIV:
        case OP_MUL:
        case OP_POW:
        case OP_MOD:
        case OP_BOR:
        case OP_BAND:
        case OP_BXOR:
        case OP_LSR:
        case OP_SHR:
        case OP_SHL:
        case OP_XOR:
        case OP_OR:
        case OP_AND:
        case OP_FDIV:
            yypirerror(yyscanner, lexer,
                    "cannot apply binary operator '%s' to arguments of type number", opnames[op]);
            return new_const(lexer, STRING_TYPE, a);

        case OP_ISEQ:
        case OP_ISLE:
        case OP_ISLT:
        case OP_ISGE:
        case OP_ISGT:
        case OP_ISNE:
            return new_const(lexer, INT_TYPE, (1 == evaluate_s_s(a, op, b)));


        /* OP_INC and OP_DEC are here only to keep the C compiler happy */
        default:
            panic(lexer, "detected 'inc' or 'dec' in fold_s_s()");
            break;
    }
    return NULL;
}

/*

=item C<static int
evaluate_i_i(int a, pir_rel_operator op, double b)>

Compare C<a> with C<b> according to the relational operator C<op>.
Wrapper for C<evaluate_n_n>, which takes arguments of type double.

=cut

*/
PARROT_WARN_UNUSED_RESULT
static int
evaluate_i_i(int a, pir_rel_operator op, int b) {
    return evaluate_n_n(a, op, b);
}

/*

=item C<static int
evaluate_n_i(int a, pir_rel_operator op, double b)>

Compare C<a> with C<b> according to the relational operator C<op>.
Wrapper for C<evaluate_n_n>, which takes arguments of type double.

=cut

*/
PARROT_WARN_UNUSED_RESULT
static int
evaluate_n_i(double a, pir_rel_operator op, int b) {
    return evaluate_n_n(a, op, b);
}

/*

=item C<static int
evaluate_i_n(int a, pir_rel_operator op, double b)>

Compare C<a> with C<b> according to the relational operator C<op>.
Wrapper for C<evaluate_n_n>, which takes arguments of type double.

=cut

*/
PARROT_WARN_UNUSED_RESULT
static int
evaluate_i_n(int a, pir_rel_operator op, double b) {
    return evaluate_n_n(a, op, b);
}

/*

=item C<static int
evaluate_n_n(double a, pir_rel_operator op, double b)>

Compare C<a> with C<b> according to the relational operator C<op>.
C<op> can be C<<!=>>, C<<==>>, C<< < >>, C<< <= >>, C<< > >> or C<< >= >>.

=cut

*/
PARROT_WARN_UNUSED_RESULT
static int
evaluate_n_n(double a, pir_rel_operator op, double b) {
    switch (op) {
        case OP_NE:
            return (a != b);
        case OP_EQ:
            return (a == b);
        case OP_LT:
            return (a < b);
        case OP_LE:
            return (a <= b);
        case OP_GT:
            return (a > b);
        case OP_GE:
            return (a >= b);
        default:
            return 0;
    }
}

/*

=item C<static int
evaluate_s_s(char *a, pir_rel_operator op, char *b)>

Compare string C<a> with string C<b> using the operator C<op>.
The function uses C's C<strcmp> function. Based on that result,
which can be -1 (smaller), 0 (equal) or 1 (larger), a boolean
result is returned.
Note that C<strcmp()> should not be replaced by the C<STREQ> macro used throughout
Parrot source code; this function uses the result of C<strcmp()>.

=cut

*/
PARROT_WARN_UNUSED_RESULT
static int
evaluate_s_s(NOTNULL(char const * const a), pir_rel_operator op, NOTNULL(char const * const b)) {
    int result = strcmp(a, b); /* do /not/ use STREQ; we're interested in the result. */

    switch (op) {
        case OP_NE:
            return (result != 0);
        case OP_EQ:
            return (result == 0);
        case OP_LT:
            return (result < 0);
        case OP_LE:
            return (result <= 0);
        case OP_GT:
            return (result > 0);
        case OP_GE:
            return (result >= 0);
        default:
            return -1;
    }
}

/*

=item C<static int
evaluate_s(char * const s)>

Evaluate a string in boolean context; if the string's length is 0, it's false.
If the string equals "0", ".0", "0." or "0.0", it's false.
Otherwise, it's true.

=cut

*/
PARROT_WARN_UNUSED_RESULT
static int
evaluate_s(NOTNULL(char * const s)) {
    int strlen_s = strlen(s);

    if (strlen_s > 0) {
        if (strlen_s <= 3) { /* if strlen > 3, (max. nr of characters to represent "0")
                                no need to do expensive string comparison; it must be true. */
            if (STREQ(s, "0") || STREQ(s, ".0") || STREQ(s, "0.") || STREQ(s, "0.0"))
                return 0;
            else
                return 1;
        }
        else /* strlen > 3, so does not contain "0.0" or a variant */
            return 1;
    }
    else
        return 0; /* strlen is not larger than 0 */
}

/*

=item C<static int
evaluate_c(lexer_state * const lexer, constant * const c)>

Evaluate a constant node in boolean context; if the constant is numeric,
it must be non-zero to be true; if it's a string, C<evaluate_s> is invoked
to evaluate the string.

=cut

*/
PARROT_WARN_UNUSED_RESULT
static int
evaluate_c(NOTNULL(lexer_state * const lexer), NOTNULL(constant * const c)) {
    switch (c->type) {
        case INT_TYPE:
            return (c->val.ival != 0);
        case NUM_TYPE:
            return (c->val.nval != 0);
        case STRING_TYPE:
            return evaluate_s(c->val.sval);
        default:
            panic(lexer, "impossible constant type in evaluate_c()");
            return 0;
    }
}

/*

=item C<static char *
concat_strings(lexer_state * const lexer, char const *a, char const *b)>

Concatenates two strings into a new buffer. The new string is returned.

=cut

*/
PARROT_WARN_UNUSED_RESULT
PARROT_CANNOT_RETURN_NULL
static char *
concat_strings(NOTNULL(lexer_state * const lexer), NOTNULL(char const * a),
               NOTNULL(char const * b))
{
    int strlen_a = strlen(a);
    char *newstr = (char *)pir_mem_allocate_zeroed(lexer, (strlen_a + strlen(b) + 1)
                                                          * sizeof (char));
    strcpy(newstr, a);
    strcpy(newstr + strlen_a, b);
    a = b = NULL;
    return newstr;
}


/*

=item C<static void
create_if_instr(yyscan_t yyscanner, lexer_state *lexer, int invert, int hasnull,
                char * const name, char * const label)>

Create an C<if> or C<unless> instruction; if C<invert> is non-zero (true), the
C<if> instruction is inverted, effectively becoming C<unless>.

If C<hasnull> is non-zero (true), the C<if> instruction becomes C<if_null>; again,
if C<invert> is non-zero, the instruction becomes C<unless_null>.

C<name> is the name of the variable that is checked during this instruction

=cut

*/
static void
create_if_instr(yyscan_t yyscanner, NOTNULL(lexer_state * const lexer), int invert, int hasnull,
                NOTNULL(char const * const name),
                NOTNULL(char const * const label))
{
    /* try to find the symbol; if it was declared it will be found; otherwise emit an error. */
    symbol *sym = find_symbol(lexer, name);
    if (sym == NULL) {
        yypirerror(yyscanner, lexer, "symbol '%s' not declared'", name);
        /* create a dummy symbol so we can continue without segfaulting. */
        sym = new_symbol(lexer, name, UNKNOWN_TYPE);
    }
    /* if there was a keyword "null", use the if/unless_null instruction variants. */
    if (hasnull)
        set_instrf(lexer, invert ? "unless_null" : "if_null", "%T%I",
                   target_from_symbol(lexer, sym), label);
    else
        set_instrf(lexer, invert ? "unless" : "if", "%T%I", target_from_symbol(lexer, sym), label);

    /* set a flag on this instruction */
    set_op_labelflag(lexer, BIT(2));
}

/*

=item C<static int
check_value(constant * const c, int val)>

Check whether the current value of the constant C<c> equals C<val>.
For our purposes, it is sufficient to check for integer values (including
a check against 1.0 or 0.0). If the values are indeed equal, true is returned,
false otherwise. If the constant is not numeric, it returns always false.

=cut

*/
PARROT_WARN_UNUSED_RESULT
static int
check_value(NOTNULL(constant * const c), int val) {
    switch(c->type) {
        case INT_TYPE:
            return (c->val.ival == val);
        case NUM_TYPE:
            return (c->val.nval == val);
        default:
            break;
    }
    return 0;
}


/*

=item C<static void
reduce_strength(yyscan_t yyscanner, int newop, int op2_index)>

Do the actual strength reduction; the current op will be replaced by C<newop>.
The operands at position 1 and C<op2_index> will be retrieved. C<op2_index> indicates
the position of the second operand that must be retrieved.

When the current instruction is:

 add_i_i_ic

then C<op2_index> will be 1, indicating the second operand must be retrieved.
When the current instruction is:

 add_i_ic_i

then C<op2_index> will be 2, so that the two operands represented by target nodes
are retrieved (the operands indicated as C<i>, as opposed by C<ic>.)

Then, if the two operands (which are target nodes) are equal, then one of them can
be removed, so that the direction of the first operand will change from OUT to INOUT.


=cut

*/
static void
reduce_strength(yyscan_t yyscanner, int newop, int op2_index) {
    lexer_state *lexer = (lexer_state *)yypirget_extra(yyscanner);
    instruction *instr = CURRENT_INSTRUCTION(lexer);
    /* based on the signatures, we know for sure that the first and second operands are targets. */

    /* get the operands */
    expression *op1, *op2;

    PARROT_ASSERT(op2_index == 1 || op2_index == 2); /* count from 0, so 2nd or 3rd operand. */

    get_operands(lexer, BIT(0) | BIT(op2_index), &op1, &op2);

    /* check whether targets are equal */
    if (targets_equal(op1->expr.t, op2->expr.t)) {
        update_op(lexer, instr, newop);
        /* in that case, remove the second one */
        if (op2_index == 2)
            op2->next = op1;
        else
            op1->next = op2->next;
    }


}


/*

=item C<static int
convert_3_to_2_args(int opcode, int *second_op_index)>

Given the 3-operand version of a Parrot math op (in the parameter C<opcode>), get the
strength-reduced version with 2 operands. This is a low-level,
"dirty-job-but-someone-has-to-do-it" function, so other higher level functions
don't get cluttered. If a 2-operand version is specified, then that version is returned.

The second parameter C<second_op_index> will be assigned the index of the second target
parameter, if any (note this is an I<out> parameter, as it is passed by address).
So, in case of C<PARROT_OP_add_i_ic_i>, this will be 2, as that's the second target
(start counting from 0). In case of C<PARROT_OP_add_i_i_ic>, it's 1.

=cut

*/
PARROT_WARN_UNUSED_RESULT
static int
convert_3_to_2_args(int opcode, NOTNULL(int *second_op_index)) {
    *second_op_index = 1; /* count from 0 */
    switch (opcode) {
        case PARROT_OP_add_i_i:
        case PARROT_OP_add_i_i_i:
            return PARROT_OP_add_i_i;

        case PARROT_OP_add_i_ic:
        case PARROT_OP_add_i_i_ic:
            return PARROT_OP_add_i_ic;

        case PARROT_OP_add_n_n_n:
            return PARROT_OP_add_n_n;
        case PARROT_OP_add_n_n_nc:
            return PARROT_OP_add_n_nc;

        case PARROT_OP_add_i_ic_i:
            *second_op_index = 2;
            return PARROT_OP_add_i_ic;

        case PARROT_OP_add_n_nc_n:
            *second_op_index = 2;
            return PARROT_OP_add_n_nc;

        case PARROT_OP_div_i_i_i:
            return PARROT_OP_div_i_i;
        case PARROT_OP_div_i_i_ic:
            return PARROT_OP_div_i_ic;
        case PARROT_OP_div_n_n_n:
            return PARROT_OP_div_n_n;
        case PARROT_OP_div_n_n_nc:
            return PARROT_OP_div_n_nc;

        case PARROT_OP_div_i_ic_i:
            *second_op_index = 2;
            return PARROT_OP_div_i_ic;
        case PARROT_OP_div_n_nc_n:
            *second_op_index = 2;
            return PARROT_OP_div_n_nc;

        /* shouldn't these be constant-folded? XXX Why do these ops exist?
        case PARROT_OP_div_i_ic_ic:
            return PARROT_OP_div_i_ic_ic;
        case PARROT_OP_div_n_nc_nc:
        */


        case PARROT_OP_mul_i_i_i:
            return PARROT_OP_mul_i_i;
        case PARROT_OP_mul_i_i_ic:
            return PARROT_OP_mul_i_ic;
        case PARROT_OP_mul_n_n_n:
            return PARROT_OP_mul_n_n;
        case PARROT_OP_mul_n_n_nc:
            return PARROT_OP_mul_n_nc;

        case PARROT_OP_mul_i_ic_i:
            *second_op_index = 2;
            return PARROT_OP_mul_i_ic;
        case PARROT_OP_mul_n_nc_n:
            *second_op_index = 2;
            return PARROT_OP_mul_n_nc;

        case PARROT_OP_fdiv_i_i_i:
            return PARROT_OP_fdiv_i_i;
        case PARROT_OP_fdiv_i_i_ic:
            return PARROT_OP_fdiv_i_ic;
        case PARROT_OP_fdiv_n_n_n:
            return PARROT_OP_fdiv_n_n;
        case PARROT_OP_fdiv_n_n_nc:
            return PARROT_OP_fdiv_n_nc;

        case PARROT_OP_fdiv_n_nc_n:
            *second_op_index = 2;
            return PARROT_OP_fdiv_n_nc;
        case PARROT_OP_fdiv_i_ic_i:
            *second_op_index = 2;
            return PARROT_OP_fdiv_i_ic;

        case PARROT_OP_sub_i_i_i:
            return PARROT_OP_sub_i_i;

        case PARROT_OP_sub_i_i_ic:
        case PARROT_OP_sub_i_ic:
            return PARROT_OP_sub_i_ic;

        case PARROT_OP_sub_n_n_n:
            return PARROT_OP_sub_n_n;
        case PARROT_OP_sub_n_n_nc:
        case PARROT_OP_sub_n_nc:
            return PARROT_OP_sub_n_nc;

        case PARROT_OP_sub_i_ic_i:
            *second_op_index = 2;
            return PARROT_OP_sub_i_ic;
        case PARROT_OP_sub_n_nc_n:
            *second_op_index = 2;
            return PARROT_OP_sub_n_nc;
        default:
            break;
    }
    return -1;
}

/*

=item C<static void
do_strength_reduction(yyscan_t yyscanner)>

Implement strength reduction for the math operators C<add>, C<sub>, C<mul>, C<div> and C<fdiv>.
If the current instruction is any of these, then the first two operands are checked; if both
are targets and are equal, the second operand is removed; this means that the first operand
will be an IN/OUT operand. For instance:

 add $I0, $I0, $I1

becomes:

 add $I0, $I1

and

 add $I0, 1

becomes:

 inc $I0

=cut

*/
static void
do_strength_reduction(yyscan_t yyscanner) {
    lexer_state *lexer = (lexer_state *)yypirget_extra(yyscanner);
    instruction *instr;
    expression  *arg1;
    expression  *arg2;
    int          newop;
    int          second_op_index;
    int          num_operands;

    /* don't do strength reduction if a "don't do" flag was set */
    if (TEST_FLAG(lexer->flags, LEXER_FLAG_NOSTRENGTHREDUCTION))
        return;

    instr = CURRENT_INSTRUCTION(lexer);

    newop = convert_3_to_2_args(instr->opcode, &second_op_index);

    /* if it's not a parrot math op, don't do strength reduction. */
    if (newop == -1)
        return;


    /* if there's more than 2 operands, do strength reduction. op_count also
     * counts the operand itself, so compare with 3, not 2.
     */
    if (instr->opinfo->op_count > 3)
        reduce_strength(yyscanner, newop, second_op_index);

    /* Now, try to simplify instruction even more. add_i_ic can become inc_i if
     * the second operand is 1, for instance. The instruction can be removed if
     * the second operand is 0.
     */
    get_operands(lexer, BIT(0) | BIT(1), &arg1, &arg2);

    switch (instr->opcode) {
        case PARROT_OP_add_i_ic:
            if (check_value(arg2->expr.c, 1)) {
                update_op(lexer, instr, PARROT_OP_inc_i);
                if (second_op_index == 2)
                    arg1->next = arg1;
                else
                    arg1->next = arg2->next;
            }
            else if (check_value(arg2->expr.c, 0)) {
                update_op(lexer, instr, PARROT_OP_noop); /* clear this one */
            }
            break;
        case PARROT_OP_add_n_nc:
            if (check_value(arg2->expr.c, 1)) {
                update_op(lexer, instr, PARROT_OP_inc_n);
                arg1->next = arg2->next;
            }
            else if (check_value(arg2->expr.c, 0))
                update_op(lexer, instr, PARROT_OP_noop); /* clear this one */
            break;
        case PARROT_OP_div_i_ic:
        case PARROT_OP_div_n_nc:
        case PARROT_OP_fdiv_i_ic:
        case PARROT_OP_fdiv_n_nc:
            if (check_value(arg2->expr.c, 1))  /* div $I0, 1 --> noop */
                update_op(lexer, instr, PARROT_OP_noop);
            else if (check_value(arg2->expr.c, 0))  /* div $I0, 0 --> error */
                yypirerror(yyscanner, lexer, "cannot divide by 0");
            break;
        case PARROT_OP_mul_i_ic:
            if (check_value(arg2->expr.c, 1))  /* mul $I0, 1 --> noop */
                update_op(lexer, instr, PARROT_OP_noop);
            else if (check_value(arg2->expr.c, 0)) { /* mul $I0, 0 --> null $I0 */
                update_op(lexer, instr, PARROT_OP_null_i);
                arg1->next = arg2->next;
            }
            break;
        case PARROT_OP_mul_n_nc:
            if (check_value(arg2->expr.c, 1)) { /* mul $I0, 1 --> noop */
                update_op(lexer, instr, PARROT_OP_noop);
            }
            else if (check_value(arg2->expr.c, 0)) { /* mul $I0, 0 --> null $I0 */
                update_op(lexer, instr, PARROT_OP_null_n);
            }
            break;

        case PARROT_OP_sub_i_ic:
            if (check_value(arg2->expr.c, 1)) { /* sub $I0, 1 --> dec $I0 */
                update_op(lexer, instr, PARROT_OP_dec_i);
                if (second_op_index == 2)
                    arg1->next = arg1;
                else
                    arg1->next = arg2->next;
            }
            else if (check_value(arg2->expr.c, 0)) { /* sub $I0, 0 --> noop */
                update_op(lexer, instr, PARROT_OP_noop);
            }
            break;
        case PARROT_OP_sub_n_nc:
            if (check_value(arg2->expr.c, 1)) { /* sub $N0, 1 --> dec $N0 */
                update_op(lexer, instr, PARROT_OP_dec_n);
                arg1->next = arg2->next;
            }
            else if (check_value(arg2->expr.c, 0))  /* sub $I0, 0 --> noop */
                update_op(lexer, instr, PARROT_OP_noop);
            break;
        default:
            break;
    }


}

/*

=item C<static void
check_first_arg_direction(yyscan_t yyscanner, char * const opname)>

This function checks the first argument's  direction of the op C<opname>.
If the direction is not C<OUT>, a syntax error is emitted. This function assumes
that C<opname> is a valid parrot op. This check is done to complain about
valid PIR syntax that is undesirable, such as:

 $S0 = print

which is another way of writing:

 print $S0

As the first argument C<$S0> is an C<IN> argument, the sugared version should
not be allowed.

=cut

*/
static void
check_first_arg_direction(yyscan_t yyscanner, NOTNULL(char const * const opname)) {
    int dir_first_arg;
    lexer_state * lexer = (lexer_state *)yypirget_extra(yyscanner);


    /* op_count also counts the instruction itself, so must be at least 2 */
    assert(CURRENT_INSTRUCTION(lexer)->opinfo->op_count >= 2);

    /* get the direction of the first argument */
    if (!CURRENT_INSTRUCTION(lexer)->opinfo->dirs)
        fprintf(stderr, "no opinfo->dirs!\n");
    else {
        op_info_t *opinfo = CURRENT_INSTRUCTION(lexer)->opinfo;

        if (opinfo)
            dir_first_arg = CURRENT_INSTRUCTION(lexer)->opinfo->dirs[0];
        else {
            fprintf(stderr, " no opinfo!\n");
            return;
        }
    }

    /* direction cannot be IN or INOUT */
    if (dir_first_arg != PARROT_ARGDIR_OUT)
        yypirerror(yyscanner, lexer, "cannot write first arg of op '%s' as a target "
                                  "(direction of argument is IN/INOUT).", opname);

}




/*

=item C<static int
get_signature_length(expression * const e)>

Calculate the length of the signature for one operand; an operand is separated
from the instruction name or another operand through '_', which must also
be counted.

 set $I0, 42  --> set_i_ic

therefore, for $I0 (a target), return 1 for the type, 1 for the '_', and whatever
is needed for a key, if any, as in this example:

 set $P0[1] = "hi"  --> set_p_kic_sc

$P0 is a target, resulting in "_p", the key [1] is a key ('k') of type int ('i'),
and it's a constant ('c'). Add 1 for the '_'.

=cut

*/
PARROT_WARN_UNUSED_RESULT
static int
get_signature_length(NOTNULL(expression * const e)) {
    switch (e->type) {
        case EXPR_TARGET:
            return 2 + ((e->expr.t->key != NULL) /* if there's a key on this target ... */
                       ? get_signature_length(e->expr.t->key->head->expr) + 1 /* ... get its length. */
                       : 0);
        case EXPR_CONSTANT:
            return 3;
        case EXPR_IDENT:
            return 3; /* 1 for '_', 1 for 'i', 1 for 'c' */
        case EXPR_KEY: /* for '_', 'k' */
            return 2 + get_signature_length(e->expr.k->head->expr);
        default:
            fprintf(stderr, "wrong expression typein get_signature_length()\n");
            break;
    }
    return 0;
}




/*

=item C<static char *
write_signature(expression * const iter, char *instr_writer)>

Write the signature for the operand C<iter>, using the character
pointer C<instr_writer>. When the operand is an indexed target node
(in other words, it has a key node), this function is invoked recursively
passing the key as an argument.

This function returns the updated character pointer (due to pass-by-value
semantics of the C calling conventions).

=cut

*/
PARROT_WARN_UNUSED_RESULT
PARROT_CANNOT_RETURN_NULL
static char *
write_signature(NOTNULL(expression * const iter), NOTNULL(char *instr_writer)) {
    switch (iter->type) {
        case EXPR_TARGET:
            *instr_writer++ = type_codes[iter->expr.t->info->type];

            if (iter->expr.t->key) {
                *instr_writer++ = '_';
                *instr_writer++ = 'k';

                /* XXX this switch replaces the messy code below. double-check before delete. */
                switch (iter->expr.t->key->head->expr->type) {
                    case EXPR_TARGET:
                        switch (iter->expr.t->key->head->expr->expr.t->info->type) {
                            case PMC_TYPE:
                                /* the key is a target, and its type is a PMC. In that
                                 * case, do not print the signature; 'kp' is not valid.
                                 */
                                break;
                            case INT_TYPE:
                                *instr_writer++ = 'i';
                                break;
                            default:
                                break;
                        }
                        break;
                    case EXPR_CONSTANT:
                        *instr_writer++ = 'c';
                        break;
                    default:
                        /* XXX does this ever happen? */
                        fprintf(stderr, "write_signature: non-constant key\n");
                        instr_writer = write_signature(iter->expr.t->key->head->expr, instr_writer);
                        break;
                }


                /*
                if ((iter->expr.t->key->expr->type == EXPR_TARGET)
                &&  (iter->expr.t->key->expr->expr.t->info->type == PMC_TYPE)) {

                }
                else {
                    if ((iter->expr.t->key->expr->type == EXPR_TARGET)
                    &&  (iter->expr.t->key->expr->expr.t->info->type == INT_TYPE))
                    {
                       *instr_writer++ = 'i';
                    }
                    else

                    switch (iter->expr.t->key->expr->type) {
                        case EXPR_CONSTANT:
                            *instr_writer++ = 'c';
                            break;
                        default:
                            fprintf(stderr, "write_signature: non-constant key\n");
                            instr_writer = write_signature(iter->expr.t->key->expr, instr_writer);
                            break;
                    }
                }*/

            }
            break;
        case EXPR_CONSTANT:
            *instr_writer++ = type_codes[iter->expr.c->type];
            *instr_writer++ = 'c';
            break;
        case EXPR_IDENT: /* used for labels; these will be converted to (i)nteger (c)onstants*/
            *instr_writer++ = 'i';
            *instr_writer++ = 'c';
            break;
        case EXPR_KEY:
            *instr_writer++ = 'k';

            instr_writer    = write_signature(iter->expr.k->head->expr, instr_writer);
            /*

            switch (iter->expr.k->expr->type) {
                case EXPR_CONSTANT:
                   *instr_writer++ = 'c';
                   break;
                default:
                    fprintf(stderr, "write_signature: non-constant key\n");
                    instr_writer = write_signature(iter->expr.k->expr, instr_writer);
                    break;
            }
            */

            break;
        default:
            fprintf(stderr, "wrong expression type in write_signature()\n");
            break;
    }
    return instr_writer;
}


/*

=item C<static char *
get_signatured_opname(instruction * const instr)>

Returns the full opname of the instruction C<name>; the signature
of the opname is based on the operands, some examples are shown
below:

 set I0, 10        --> set_i_ic
 print "hi"        --> print_sc
 set P0[1], 3.14   --> set_p_kic_nc

For each operand, an underscore is added; then for the types
int, num, string or pmc, an 'i', 'n', 's' or 'p' is added
respectively. If the operand is a constant, a 'c' suffic is added.

If the operand is a key of something, a 'k' prefix is added.

=cut

*/
PARROT_WARN_UNUSED_RESULT
PARROT_CANNOT_RETURN_NULL
static char *
get_signatured_opname(NOTNULL(lexer_state * const lexer), NOTNULL(instruction * const instr)) {
    size_t      fullname_length;
    char       *fullname;
    char       *instr_writer;
    expression *iter         = instr->operands;
    unsigned    num_operands = 0;

    /* get length of short opname (and add 1 for the NULL character) */
    fullname_length = strlen(instr->opname) + 1;

    /* for each operand, calculate the length of the signature (for that op.)
     * and add it to the full length.
     */
    if (iter) {
        iter = iter->next;
        do {
            int keylength    = get_signature_length(iter);
            /* printf("keylength of operand was: %d\n", keylength);
            */
            fullname_length += keylength;
            iter             = iter->next;
            ++num_operands;
        }
        while (iter != instr->operands->next);
    }

    /* now we know how long the fullname will be, allocate enough memory. */
    fullname = (char *)pir_mem_allocate_zeroed(lexer, fullname_length * sizeof (char));

    /* copy the short name into fullname buffer, and set instr_writer to
     * the character after that.
     */
    strcpy(fullname, instr->opname);
    instr_writer = fullname + strlen(instr->opname);

    /* now iterate again over all operands, and codify them into the fullname.
     * As we counted the number of operands, this loop can be written a bit simpler.
     */
    iter = instr->operands;
    while (num_operands-- > 0) {
        iter            = iter->next;
        *instr_writer++ = '_'; /* separate each operand code by a '_' */
        instr_writer    = write_signature(iter, instr_writer);
    }

    return fullname;
}


/*

=item C<static int
get_opinfo(yyscan_t yyscanner)>

Compute the signatured opname from the instruction name and its arguments.
Based on this signature, the opcode is retrieved. If the opcode cannot
be found (i.e., it's -1), then a check is done for some special math ops;
C<add_i_ic_ic> and the like do not exist, but instead should be replaced
by C<set_i_ic> (and the like). If it's not one of these special cases,
then that means the op is not valid, and an error message will be reported.

=cut

*/
PARROT_IGNORABLE_RESULT
static int
get_opinfo(yyscan_t yyscanner) {
    lexer_state * const lexer = (lexer_state * const)yypirget_extra(yyscanner);
    instruction * const instr = CURRENT_INSTRUCTION(lexer);

    char * const fullopname   = get_signatured_opname(lexer, instr);
    /* find the numeric opcode for the signatured op. */
    int          opcode       = lexer->interp->op_lib->op_code(fullopname, 1);

    if (opcode < 0) {
        yypirerror(yyscanner, lexer, "'%s' is not a parrot op", fullopname);
        return FALSE;
    }
    else {
        update_op(lexer, instr, opcode);
        return TRUE;
    }

}

/*

=item C<static void
check_op_args_for_symbols(yyscan_t yyscanner)>

Check the arguments of the current instruction. First, the number of expected arguments
is checked against the specified number of arguments. Then, for each argument, if the
particular argument should not be a label (instructions can take LABEL operands), and
if the argument is a target node, then the argument must be a declared symbol. If it
is not, an error message is given.

If there are errors, FALSE is returned; if successful, TRUE is returned.

=cut

*/
PARROT_WARN_UNUSED_RESULT
static int
check_op_args_for_symbols(yyscan_t yyscanner) {
    lexer_state * const lexer = (lexer_state * const)yypirget_extra(yyscanner);
    struct op_info_t  * opinfo;
    unsigned short      i;
    short               opcount;
    unsigned            num_operands;
    char               *fullopname;
    int                 opcode;
    int                 result;
    int                 label_bitmask = 0; /* an int is at least 32 bits;
                                            * an op cannot have more than 8 operands, as defined in
                                            * include/parrot/op.h:18, so an int is good enough for
                                            * a bit mask to cover all operands.
                                            */

    /* iterate over all operands to set the type and PASM register on all target nodes, if any */
    num_operands = get_operand_count(lexer);
    for (i = 0; i < num_operands; i++) {
        expression *operand = get_operand(lexer, i + 1); /* get_operand counts from 1 */

        if (operand->type == EXPR_IDENT) { /* op_arg ::= identifier */
            /* the operand is an identifier, check now whether it was a symbol. If so,
             * then a new target node is created which receives a pointer to the symbol.
             * Then, convert the operand to an EXPR_TARGET.
             */
            symbol *sym = find_symbol(lexer, operand->expr.id);

            if (sym) {
                operand->expr.t        = new_target(lexer);
                /* operand->expr.t->s.sym = sym;  */ /* target's pointer set to symbol */
                operand->expr.t->info  = &sym->info;
                operand->type          = EXPR_TARGET; /* convert operand node into EXPR_TARGET */
            }
            else { /* it must be a label */
                SET_BIT(label_bitmask, BIT(i));
            }
        }
    }


    /* make sure the current instruction gets a pointer to the relevant opinfo entry */
    result = get_opinfo(yyscanner);

    /* if failure, return false */
    if (result == FALSE)
        return FALSE;
    else {
        int i = 0;
        expression *iter = CURRENT_INSTRUCTION(lexer)->operands;
        opinfo           = CURRENT_INSTRUCTION(lexer)->opinfo;

        PARROT_ASSERT(opinfo);

        opcount = opinfo->op_count - 1; /* according to op.h, opcount also counts the op itself. */

        PARROT_ASSERT(opcount >= 0);

        if (iter == NULL)
            return TRUE;

        /* iterate over all operands */
        do {
            iter = iter->next;

            /* fprintf(stderr, "operand %d is %s supposed to be a label\n", i,
               opinfo->labels[i]? "":"not");
             */

            if (opinfo->labels[i] == 0) {
                /* test the bitmask; if we expected this operand was a label, but now we found out
                 * through opinfo that it's not supposed to be a label at this position, so emit
                 * an error.
                 */
                if (TEST_BIT(label_bitmask, BIT(i))) {
                    undeclared_symbol(yyscanner, lexer, iter->expr.id);
                    return FALSE;
                }
            }
            else { /* operand i is a label. */
                /* set the i'th flag, indicating that the i'th operand is actually a
                 * label. Then later, when we're going to fixup the labels, we know
                 * which one to fix.
                 */

                /* fprintf(stderr, "setting %dth label flag on instruction %s\n", BIT(i),
                        CURRENT_INSTRUCTION(lexer)->opname); */

                SET_FLAG(CURRENT_INSTRUCTION(lexer)->oplabelbits, BIT(i));
            }

            ++i;
        }
        while (iter != CURRENT_INSTRUCTION(lexer)->operands);
    }
    return TRUE;
}

/*

=item C<static void
undeclared_symbol(yyscan_t yyscanner, lexer_state * const lexer, char * const symbol)>

Report an error message saying that C<symbol> was not declared. Then test
whether the symbol is perhaps a PASM register identifier. The user may have
mistakenly tried to use a PASM register in PIR mode.

=cut

*/
static void
undeclared_symbol(yyscan_t yyscanner, lexer_state * const lexer, char const * const symbol) {
    yypirerror(yyscanner, lexer, "symbol '%s' not declared", symbol);

    /* maybe user tried to use PASM register? */
    if (symbol[0] == 'S' || symbol[0] == 'N' || symbol[0] == 'I' || symbol[0] == 'P') {
        /* if all subsequent characters are digits, then it was
         * the format of a PASM register.
         */
        if ((strlen(symbol) > 1) /* make sure string is longer than 1 char */
        &&  (strspn(symbol + 1, "0123456789") == strlen(symbol + 1)))
            fprintf(stderr,
                "PASM registers ('%s') are not allowed in PIR code\n", symbol);

    }
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


