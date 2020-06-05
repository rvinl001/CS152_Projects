/* C Declarations */
%{
#include <stdio.h>
#include <string.h>
#include <list>
#include <map>
#include "parser.tab.hh"
void yyerror(const char *msg);
extern FILE * yyin;
extern char* yytext;
extern int currLine;
extern int currPos;
int yylex();
int temp_num = 0;
bool no_error = true;

// used to check for sematic errors
map <string,int> symbol_table // 0 = scalar, 1 = array, 2 = func

string make_temps() {
	string output = "__temp__" + itoa(temp_num);
	temp_num++;
	return output;
}				
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

%start start_prog
%define parse.error verbose
%union yyval {
        char* str;
	int num;
	
	struct declaration_type {
		char* code;
		list<char*> ids;
	};
}

%type <num> NUMBER
%type <str> IDENT
%type <str> program functions function statements
%type <declaration_type> declarations


/* Grammar Rules */
%%
start_prog:	program 
		{if (no_error) printf("%s\n", $1);}
		;


program:     /*epsilon*/ 
		{$$ = "";}
		|
		function program
                {printf("prog_start -> functions\n");}
                ;

ident:       	IDENT
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
                IDENT L_SQUARE_BRACKET expression R_SQUARE_BRACKET
                {printf("var -> ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n");}
                |
                IDENT L_SQUARE_BRACKET expression R_SQUARE_BRACKET L_SQUARE_BRACKET expression R_SQUARE_BRACKET
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
                mult_expression SUB mult_expression
                {printf("expression -> multiplicative_expression SUB multiplicative_expression\n");}
                |
                mult_expression ADD mult_expression
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
		|
		term ADD term
		{printf("multiplicative_expression -> term ADD term\n");}
		|
		term SUB term
		{printf("multiplicative_expression -> term SUB term\n");}
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
                relation_and_exp OR relation_and_exp
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
                {printf("identifiers -> ident\n");}
                |
                identifiers COMMA IDENT
                {printf("identifiers -> ident COMMA identifiers\n");}
                ;

declaration:    identifiers COLON INTEGER
                {printf("declaration -> identifiers COLON INTEGER\n");}
                |
                identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER
                {printf("declaration -> identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");}
                |
                identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER
                {printf("declaration -> identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");}
		|
		identifiers error INTEGER
                ;

declarations:   /* epsilon */
                {$$ = "";}
                |
                declaration SEMICOLON declarations
                {printf("declarations -> declaration SEMICOLON declarations\n");}
                ;

function:       FUNCTION IDENT SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY
                {$$ = "func " + $2 + "\n";
		 $$ += $5 + "\n";
		 $$ += $8 + "\n";
		 $$ += $11 + "\n";
		}
		|
		FUNCTION IDENT error BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY
                ;

functions:      /* epsilon */
                {$$ = "";}
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
