/* C Declarations */
%{
#include "stdio.h"
#include "string.h"
#include "y.tab.h"
void yyerror(const char *msg);
extern FILE * yyin;
extern char* yytext;
extern int currLine;
extern int currPos;
int yylex();
%}

/*Bison Declarations*/
%token <str> IDENT
%token <num> NUMBER
%token SEMICOLON COLON COMMA L_SQ_BRACKET MOD
%token R_SQ_BRACKET FUNCTION BEGIN_PARAMS WHILE
%token BEGIN_LOCALS END_LOCALS BEGIN_BODY END_BODY
%token INTEGER ARRAY OF IF THEN ENDIF ELSE DIV
%token DO BEGINLOOP ENDLOOP CONTINUE READ WRITE
%token AND OR NOT TRUE RETURN ADD SUB MULT
%token LTE GTE ASSIGN FALSE ERRTOK
%define parse.error verbose
%union yylval {
   	char* str;
	int num;
}

%type<string> program string dec state

/* Grammar Rules */
%%
prog_start: 	program 		
		{if(no_error) printf("%s", $1);}
          	;

program:        /*empty*/               
		{$$="";}
	  	;

term:		NUMBER
		{printf("term -> NUMBER %d", $1);} /* use 1 because NUMBER is in first position */
		|
		var
		{printf("term -> var");}
		;

var:		IDENT
		{printf("var -> indent");}
		;

vars:		var COMMA vars
		{printf("vars -> var COMMA vars");}
		|
		var
		{printf(" vars -> var");}
		;

statement:	READ vars
		{printf("statement -> READ vars");}
		|
		WRITE vars
		{printf("statement -> WRITE vars");}
		|
		var ASSIGN expression
		{printf("statement -> var ASSIGN expression");}
		|
		CONTINUE
		{printf("statement -> CONTINUE");}
		|
		DO BEGINLOOP statements ENDLOOP WHILE bool_exp
		{printf("statement -> DO BEGINLOOP statements ENDLOOP WHILE bool_exp");}
		|
		IF bool_exp THEN statements ENDIF
		{printf("statement -> IF bool_exp THEN statements ENDIF");}
		|
		IF bool_exp THEN statements ELSE statements ENDIF
		{printf("statement -> IF bool_exp THEN statements ELSE statements ENDIF");}
		|
		WHILE bool_exp BEGINLOOP statements ENDLOOP
		{printf("statement -> WHILE bool_exp BEGINLOOP statements ENDLOOP");}
		;

statements:	/* epsilon */
		{printf("statements -> epsilon");}
		|
		statement SEMICOLON statements
		{printf("statements -> statement SEMICOLON statements");}
		;


expression:	mult_expression
		{printf("expression -> mult_expression");}
		|
		mult_expression ADD mult_expression
		{printf("expression -> mult_expression ADD mult_expression");}
		|
		mult_expression SUB mult_expression
		{printf("expression -> mult_expression SUB mult_expression");}
		|
		mult_expression MULT mult_expression
		{printf("expression -> mult_expression MULT mult_expression");}	
		|
		mult_expression DIV mult_expression
		{printf("expression -> mult_expression DIV mult_expression");}		
		;

mult_expression:term
		{printf("mult_expression -> term");}
		|
		term MOD term
		{printf("mult_expression -> term MOD term"):}
		|
		term MULT term
		{printf("mult_expression -> term MULT term"):}
		|
		term ADD term
		{printf("mult_expression -> term ADD term"):}
		|
		term SUB term
		{printf("mult_expression -> term SUB term"):}
		|
		term DIV term
		{printf("mult_expression -> term DIV term"):}
		;

relation_exp:	expression comparison expression
		{printf("relation_exp -> expression comparison expression");}
		|
		TRUE
		{printf("relation_exp -> TRUE");}
		|
		FALSE
		{printf("relation_exp -> FALSE");}
		;

relation_and_exp:relation_exp
		 {printf("relation_and_exp -> relation_exp");}
		 |
		 relation_exp AND relation_exp
		 {printf("relation_and_exp -> relation_exp AND relation_exp");}
		 ;

relation_or_exp: relation_exp
		 {printf("relation_or_exp -> relation_exp");}
                 |
                 relation_exp OR relation_exp
                 {printf("relation_or_exp -> relation_exp OR relation_exp");}
                 ;

bool_exp:	relation_and_exp
		{printf("bool_exp -> relation_and_exp");}
		|
		relation_and_exp OR relation_and_exp
		{printf("book_exp -> relation_and_exp OR relation_and_exp");}
		;


comparison: 	LT
		{printf("comparison -> LT");}
		|
		GT
		{printf("comparison -> GT");}
		|
		EQ
		{printf("comparison -> EQ");}
		|
		LTE
		{printf("comparison -> LTE");}
		|
		GTE
		{printf("comparison -> GTE");}
		;

ident: 		IDENT
		{printf("ident -> IDENT %s", $1);} /* use 1 because IDENT is first position */
		;

identifiers: 	IDENT
		{printf("identifiers -> IDENT %s", $1);}
		|
		IDENT COMMA identifiers
		{printf("identifiers -> IDENT %s COMMA identifiers", $1);}
		;

declaration:	identifiers COLON INTEGER
		{printf("declaration -> identifiers COLON INTEGER");}
		|
		identifiers COLON ARRAY L_SQ_BRACKET NUMBER R_SQ_BRACKET OF INTEGER
		{printf("identifiers COLON ARRAY L_SQ_BRACKET NUMBER R_SQ_BRACKET OF INTEGER");}
		;

declarations: 	/* epsilon */
		{printf("declarations -> epsilon"):}
		|
		declaration SEMICOLON declarations
		{printf("declarations -> declaration SEMICOLON declarations");}
		;

function: 	FUNCTION IDENT SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY
		{printf("function -> FUNCTION IDENT %s SEMICOLON BEGIN_PARAMS declarations END_PARAMS 
		BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY\n", $2);} /* use 2 because IDENT is second position */
		;

functions:	/* epsilon */		
		{printf("functions -> epsilon\n");} 		
		| function functions
		{printf("functions -> function functions\n");} 
		;

%%
/* Additional C Code */
int main(int argc, char **argv) {

   if (argc >= 2) {
      yyin = fopen(argv[1], "r");
      if (!yyin) {
         exit(1);
      }
   } else {
      yyin = stdin;
   }

   yyparse();

   return 0;
}

void yyerror(const char * msg) 
{
	printf("Syntax error at line %d,":=" expected", currLine, msg);	
}



