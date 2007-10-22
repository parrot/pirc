/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TK_LABEL = 258,
     TK_DOTDOT = 259,
     TK_ENDM = 260,
     TK_NL = 261,
     TK_HLL = 262,
     TK_HLL_MAP = 263,
     TK_EMIT = 264,
     TK_EOM = 265,
     TK_N_OPERATORS = 266,
     TK_PRAGMA = 267,
     TK_LOADLIB = 268,
     TK_SUB = 269,
     TK_END = 270,
     TK_PARAM = 271,
     TK_LEX = 272,
     TK_LOCAL = 273,
     TK_NAMESPACE = 274,
     TK_ENDNAMESPACE = 275,
     TK_INVOCANT = 276,
     TK_METH_CALL = 277,
     TK_GLOBALCONST = 278,
     TK_CONST = 279,
     TK_RETURN = 280,
     TK_YIELD = 281,
     TK_PCC_BEGIN_YIELD = 282,
     TK_PCC_END_YIELD = 283,
     TK_PCC_BEGIN_RETURN = 284,
     TK_PCC_END_RETURN = 285,
     TK_PCC_BEGIN = 286,
     TK_PCC_END = 287,
     TK_GET_RESULTS = 288,
     TK_PCC_CALL = 289,
     TK_ARG = 290,
     TK_RESULT = 291,
     TK_NCI_CALL = 292,
     TK_IDENT = 293,
     TK_STRINGC = 294,
     TK_INTC = 295,
     TK_NUMC = 296,
     TK_PASM_PREG = 297,
     TK_PASM_NREG = 298,
     TK_PASM_SREG = 299,
     TK_PASM_IREG = 300,
     TK_SYM_PREG = 301,
     TK_SYM_NREG = 302,
     TK_SYM_SREG = 303,
     TK_SYM_IREG = 304,
     TK_PARROT_OP = 305,
     TK_INT = 306,
     TK_NUM = 307,
     TK_PMC = 308,
     TK_STRING = 309,
     TK_NULL = 310,
     TK_IF = 311,
     TK_UNLESS = 312,
     TK_GOTO = 313,
     TK_NEW = 314,
     TK_ARROW = 315,
     TK_NE = 316,
     TK_EQ = 317,
     TK_LT = 318,
     TK_LE = 319,
     TK_GT = 320,
     TK_GE = 321,
     TK_USHIFT = 322,
     TK_RSHIFT = 323,
     TK_LSHIFT = 324,
     TK_FDIV = 325,
     TK_OR = 326,
     TK_AND = 327,
     TK_XOR = 328,
     TK_CONC = 329,
     TK_ASSIGN_USHIFT = 330,
     TK_ASSIGN_RSHIFT = 331,
     TK_ASSIGN_LSHIFT = 332,
     TK_ASSIGN_INC = 333,
     TK_ASSIGN_DEC = 334,
     TK_ASSIGN_MUL = 335,
     TK_ASSIGN_MOD = 336,
     TK_ASSIGN_POW = 337,
     TK_ASSIGN_DIV = 338,
     TK_ASSIGN_BOR = 339,
     TK_ASSIGN_BAND = 340,
     TK_ASSIGN_FDIV = 341,
     TK_ASSIGN_BNOT = 342,
     TK_ASSIGN_CONC = 343,
     TK_FLAG_INIT = 344,
     TK_FLAG_LOAD = 345,
     TK_FLAG_MAIN = 346,
     TK_FLAG_ANON = 347,
     TK_FLAG_METHOD = 348,
     TK_FLAG_OUTER = 349,
     TK_FLAG_VTABLE = 350,
     TK_FLAG_LEX = 351,
     TK_FLAG_MULTI = 352,
     TK_FLAG_POSTCOMP = 353,
     TK_FLAG_IMMEDIATE = 354,
     TK_FLAG_UNIQUE_REG = 355,
     TK_FLAG_NAMED = 356,
     TK_FLAG_SLURPY = 357,
     TK_FLAG_FLAT = 358,
     TK_FLAG_OPTIONAL = 359,
     TK_FLAG_OPT_FLAG = 360
   };
#endif
/* Tokens.  */
#define TK_LABEL 258
#define TK_DOTDOT 259
#define TK_ENDM 260
#define TK_NL 261
#define TK_HLL 262
#define TK_HLL_MAP 263
#define TK_EMIT 264
#define TK_EOM 265
#define TK_N_OPERATORS 266
#define TK_PRAGMA 267
#define TK_LOADLIB 268
#define TK_SUB 269
#define TK_END 270
#define TK_PARAM 271
#define TK_LEX 272
#define TK_LOCAL 273
#define TK_NAMESPACE 274
#define TK_ENDNAMESPACE 275
#define TK_INVOCANT 276
#define TK_METH_CALL 277
#define TK_GLOBALCONST 278
#define TK_CONST 279
#define TK_RETURN 280
#define TK_YIELD 281
#define TK_PCC_BEGIN_YIELD 282
#define TK_PCC_END_YIELD 283
#define TK_PCC_BEGIN_RETURN 284
#define TK_PCC_END_RETURN 285
#define TK_PCC_BEGIN 286
#define TK_PCC_END 287
#define TK_GET_RESULTS 288
#define TK_PCC_CALL 289
#define TK_ARG 290
#define TK_RESULT 291
#define TK_NCI_CALL 292
#define TK_IDENT 293
#define TK_STRINGC 294
#define TK_INTC 295
#define TK_NUMC 296
#define TK_PASM_PREG 297
#define TK_PASM_NREG 298
#define TK_PASM_SREG 299
#define TK_PASM_IREG 300
#define TK_SYM_PREG 301
#define TK_SYM_NREG 302
#define TK_SYM_SREG 303
#define TK_SYM_IREG 304
#define TK_PARROT_OP 305
#define TK_INT 306
#define TK_NUM 307
#define TK_PMC 308
#define TK_STRING 309
#define TK_NULL 310
#define TK_IF 311
#define TK_UNLESS 312
#define TK_GOTO 313
#define TK_NEW 314
#define TK_ARROW 315
#define TK_NE 316
#define TK_EQ 317
#define TK_LT 318
#define TK_LE 319
#define TK_GT 320
#define TK_GE 321
#define TK_USHIFT 322
#define TK_RSHIFT 323
#define TK_LSHIFT 324
#define TK_FDIV 325
#define TK_OR 326
#define TK_AND 327
#define TK_XOR 328
#define TK_CONC 329
#define TK_ASSIGN_USHIFT 330
#define TK_ASSIGN_RSHIFT 331
#define TK_ASSIGN_LSHIFT 332
#define TK_ASSIGN_INC 333
#define TK_ASSIGN_DEC 334
#define TK_ASSIGN_MUL 335
#define TK_ASSIGN_MOD 336
#define TK_ASSIGN_POW 337
#define TK_ASSIGN_DIV 338
#define TK_ASSIGN_BOR 339
#define TK_ASSIGN_BAND 340
#define TK_ASSIGN_FDIV 341
#define TK_ASSIGN_BNOT 342
#define TK_ASSIGN_CONC 343
#define TK_FLAG_INIT 344
#define TK_FLAG_LOAD 345
#define TK_FLAG_MAIN 346
#define TK_FLAG_ANON 347
#define TK_FLAG_METHOD 348
#define TK_FLAG_OUTER 349
#define TK_FLAG_VTABLE 350
#define TK_FLAG_LEX 351
#define TK_FLAG_MULTI 352
#define TK_FLAG_POSTCOMP 353
#define TK_FLAG_IMMEDIATE 354
#define TK_FLAG_UNIQUE_REG 355
#define TK_FLAG_NAMED 356
#define TK_FLAG_SLURPY 357
#define TK_FLAG_FLAT 358
#define TK_FLAG_OPTIONAL 359
#define TK_FLAG_OPT_FLAG 360




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 175 "pir.y"
{
    double dval;
    int    ival;
    char  *sval;
}
/* Line 1489 of yacc.c.  */
#line 265 "pirparser.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



