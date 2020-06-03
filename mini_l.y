/* C Declarations */
%{
#include <stdio.h>
#include <string.h>
#include "y.tab.h"
void yyerror(const char *msg);
extern FILE * yyin;
extern char* yytext;
extern int currLine;
extern int currPos;
int yylex();
%}

/*Bison Declarations*/
%token L_PAREN R_PAREN EQ NEQ LT GT END_PARAMS
%token SEMICOLON COLON COMMA L_SQUARE_BRACKET MOD
%token R_SQUARE_BRACKET FUNCTION BEGIN_PARAMS WHILE
%token BEGIN_LOCALS END_LOCALS BEGIN_BODY END_BODY
%token INTEGER ARRAY OF IF THEN ENDIF ELSE DIV
%token DO BEGINLOOP ENDLOOP CONTINUE READ WRITE
%token AND OR FOR NOT TRUE RETURN ADD SUB MULT
%token LTE GTE ASSIGN FALSE ERRTOK
%token IDENT NUMBER

%start prog_start
%define parse.error verbose
%union {
        char* str;
        int num;
}

%type <num> NUMBER
%type <str> IDENT

/* Grammar Rules */
%%
prog_start:     /*epsilon*/ 
		{printf("prog_start -> epsilon\n");}
		|
		functions
                {printf("prog_start -> functions\n");}
                ;

ident:          IDENT
                {printf("ident -> IDENT %s\n", $1);}
                ;

term:           NUMBER
                {printf("term -> NUMBER \n");} /* use 1 because NUMBER is in first position */
                |
                var
                {printf("term -> var\n");}
		|
		L_PAREN expression R_PAREN
		{printf("term -> L_PAREN expression R_PAREN\n");}
		|
		L_PAREN mult_expression R_PAREN
		{printf("term -> L_PAREN mult_expression R_PAREN\n");}
		|
		SUB NUMBER
                {printf("term -> SUB NUMBER \n");} /* use 1 because NUMBER is in first position */
                |
                SUB var
                {printf("term -> SUB var\n");}
                |
                SUB L_PAREN expression R_PAREN
                {printf("term -> SUB L_PAREN expression R_PAREN\n");}
		|
		IDENT L_PAREN expression R_PAREN
		{printf("term -> IDENT L_PAREN expression R_PAREN\n");}
		|
		IDENT L_PAREN mult_expression R_PAREN
		{printf("term -> IDENT L_PAREN mult_expression R_PAREN\n");}
                ;

var:            ident
                {printf("var -> ident\n");}
                |
                identifiers L_SQUARE_BRACKET expression R_SQUARE_BRACKET
                {printf("var -> ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n");}
                |
                identifiers L_SQUARE_BRACKET expression R_SQUARE_BRACKET L_SQUARE_BRACKET expression R_SQUARE_BRACKET
                {printf("var -> ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n");}
                ;

vars:           var COMMA vars
                {printf("vars -> var COMMA vars\n");}
                |
                var
                {printf("vars -> var\n");}
                ;

statement:      var ASSIGN expression
                {printf("statement -> var ASSIGN expression\n");}
                |
                IF bool_exp THEN statements ENDIF
                {printf("statement -> IF bool_exp THEN statements ENDIF\n");}
                |
                IF bool_exp THEN statements ELSE statements ENDIF
                {printf("statement -> IF bool_exp THEN statements ELSE statements ENDIF\n");}
                |
                WHILE bool_exp BEGINLOOP statements ENDLOOP
                {printf("statement -> WHILE bool_exp BEGINLOOP statements ENDLOOP\n");}
                |
                DO BEGINLOOP statements ENDLOOP WHILE bool_exp
                {printf("statement -> DO BEGINLOOP statements ENDLOOP WHILE bool_exp\n");}
                |
                FOR var ASSIGN NUMBER SEMICOLON bool_exp SEMICOLON var ASSIGN expression BEGINLOOP statements SEMICOLON ENDLOOP
                {printf("statement -> var ASSIGN NUMBER SEMICOLON bool_exp SEMICOLON var ASSIGN exp BEGINLOOP statements SEMICOLON ENDLOOP\n");}
                |
		READ vars
                {printf("statement -> READ vars\n");}
                |
                WRITE vars
                {printf("statement -> WRITE vars\n");}
                |
                CONTINUE
                {printf("statement -> CONTINUE\n");}
                |
                RETURN expression
                {printf("statement -> RETURN expression\n");}
		|
		var error expression
		|
		FOR var error NUMBER SEMICOLON bool_exp SEMICOLON var ASSIGN expression BEGINLOOP statements SEMICOLON ENDLOOP
		|
		FOR var error NUMBER error  bool_exp SEMICOLON var ASSIGN expression BEGINLOOP statements SEMICOLON ENDLOOP
		|
		FOR var ASSIGN NUMBER SEMICOLON bool_exp error var ASSIGN expression BEGINLOOP statements SEMICOLON ENDLOOP
		|
		FOR var ASSIGN NUMBER SEMICOLON bool_exp SEMICOLON var error expression BEGINLOOP statements SEMICOLON ENDLOOP
		|
		FOR var ASSIGN NUMBER SEMICOLON bool_exp SEMICOLON var ASSIGN expression BEGINLOOP statements error ENDLOOP
                ;

statements:     /* epsilon */
                {printf("statements -> epsilon\n");}
                |
                statement SEMICOLON statements
                {printf("statements -> statement SEMICOLON statements\n");}
                ;


expression:     mult_expression
                {printf("expression -> multiplicative_expression\n");}
                |
                mult_expression SUB expression
                {printf("expression -> multiplicative_expression SUB multiplicative_expression\n");}
                |
                mult_expression ADD expression
                {printf("expression -> multiplicative_expression ADD multiplicative_expression\n");}
                ;

mult_expression: term
                {printf("multiplicative_expression -> term\n");}
                |
                term MOD term
                {printf("multiplicative_expression -> term MOD term\n");}
                |
                term MULT term
                {printf("multiplicative_expression -> term MULT term\n");}
                |
                term DIV term
                {printf("multiplicative_expression -> term DIV term\n");}
                ;

relation_exp:   expression comparison expression
                {printf("relation_exp -> expression comp expression\n");}
                |
                TRUE
                {printf("relation_exp -> TRUE\n");}
                |
                FALSE
                {printf("relation_exp -> FALSE\n");}
                |
		L_PAREN bool_exp R_PAREN
		{printf("relation_exp -> L_PAREN bool_exp R_PAREN\n");}
                |
		NOT expression comparison expression
                {printf("relation_exp -> NOT expression comp expression\n");}
                |
                NOT TRUE
                {printf("relation_exp -> NOT TRUE\n");}
                |
                NOT FALSE
                {printf("relation_exp -> NOT FALSE\n");}
		|
		NOT L_PAREN bool_exp R_PAREN
                {printf("relation_exp -> NOT L_PAREN bool_exp R_PAREN\n");}
                ;


relation_and_exp: relation_exp
                 {printf("relation_and_exp -> relation_exp\n");}
                 |
                 relation_exp AND relation_and_exp
                 {printf("relation_and_exp -> relation_exp AND relation_exp\n");}
                 ;

bool_exp:       relation_and_exp
                {printf("bool_exp -> relation_and_exp\n");}
                |
                relation_and_exp OR bool_exp
                {printf("bool_exp -> relation_and_exp OR relation_and_exp\n");}
                ;


comparison:     LT
                {printf("comp -> LT\n");}
                |
                GT
                {printf("comp -> GT\n");}
                |
                EQ
                {printf("comp -> EQ\n");}
                |
                NEQ
                {printf("comp -> NEQ\n");}
                |
                LTE
                {printf("comp -> LTE\n");}
                |
                GTE
                {printf("comp -> GTE\n");}
                ;


identifiers:    IDENT
                {printf("ident -> IDENT %s\n", $1);}
                ;

ids:		identifiers
                {printf("identifiers -> ident\n");}
		|
                identifiers COMMA ids
                {printf("identifiers -> ident COMMA identifiers\n");}
                ;	

declaration:    ids COLON INTEGER
                {printf("declaration -> identifiers COLON INTEGER\n");}
                |
		ids error INTEGER
		|
                ids COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER
                {printf("declaration -> identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");}
                |
		ids error ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER
		|
                ids COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER
                {printf("declaration -> identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");}
		|
		ids error ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER
                ;

declarations:   /* epsilon */
                {printf("declarations -> epsilon\n");}
                |
                declaration SEMICOLON declarations
                {printf("declarations -> declaration SEMICOLON declarations\n");}
		;

beginning:	FUNCTION IDENT SEMICOLON
		{printf("ident -> IDENT %s\n",$2);}
		;

function:       beginning BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY
                {printf("function -> FUNCTION IDENT SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY\n");}
                |
                beginning  error BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY
                ;

functions:      /* epsilon */
                {printf("functions -> epsilon\n");}
                | function functions
                {printf("functions -> function functions\n");}
                ;
%%
/* Additional C Code */
int main(int argc, char **argv) {

        if (argc >= 2)
        {
                yyin = fopen(argv[1], "r");
                if (yyin == NULL)
                {
                        yyin = stdin;
                }
        }
        else
        {
                yyin = stdin;
        }

        yyparse();


        return 1;
}


void yyerror(const char * msg)
{
        printf("Syntax error at line %d: %s\n", currLine, msg);
}

