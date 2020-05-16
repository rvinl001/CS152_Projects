/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    L_PAREN = 258,
    R_PAREN = 259,
    EQ = 260,
    NEQ = 261,
    LT = 262,
    GT = 263,
    END_PARAMS = 264,
    SEMICOLON = 265,
    COLON = 266,
    COMMA = 267,
    L_SQUARE_BRACKET = 268,
    MOD = 269,
    R_SQUARE_BRACKET = 270,
    FUNCTION = 271,
    BEGIN_PARAMS = 272,
    WHILE = 273,
    BEGIN_LOCALS = 274,
    END_LOCALS = 275,
    BEGIN_BODY = 276,
    END_BODY = 277,
    INTEGER = 278,
    ARRAY = 279,
    OF = 280,
    IF = 281,
    THEN = 282,
    ENDIF = 283,
    ELSE = 284,
    DIV = 285,
    DO = 286,
    BEGINLOOP = 287,
    ENDLOOP = 288,
    CONTINUE = 289,
    READ = 290,
    WRITE = 291,
    AND = 292,
    OR = 293,
    FOR = 294,
    NOT = 295,
    TRUE = 296,
    RETURN = 297,
    ADD = 298,
    SUB = 299,
    MULT = 300,
    LTE = 301,
    GTE = 302,
    ASSIGN = 303,
    FALSE = 304,
    ERRTOK = 305,
    IDENT = 306,
    NUMBER = 307
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 27 "mini_l.y" /* yacc.c:1909  */

        char* str;
        int num;

#line 112 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
