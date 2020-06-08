%{
%}

%skeleton "lalr1.cc"
%require "3.0.4"
%defines
%define api.token.constructor
%define api.value.type variant
%define parse.error verbose
%locations


%code requires
{
#include <list>
#include <string>
#include <functional>
#include <vector>

using namespace std;

	/* define the sturctures using as types for non-terminals */

struct dec_type {
	std::string code;
	std::vector<string> ids;
};



	/* end the structures for non-terminal types */
}


%code
{
#include "parser.tab.hh"
#include <stdio.h>
	/* you may need these header files 
	 * add more header file if you need more
	 */
#include <sstream>
#include <map>
#include <regex>
#include <set>
yy::parser::symbol_type yylex();

	/* define your symbol table, global variables,
	 * list of keywords or any function you may need here */

/* to output "__temp__"  */
/*int num_temps = 0;
string make_temp() {
	std::string ret = "__temp__" + itoa(num_temps);
	num_temps++;
	return ret;
}*/	
	/* end of your code */
}

%token END 0 "end of file";
%token L_PAREN R_PAREN EQ NEQ LT GT END_PARAMS
%token SEMICOLON COLON COMMA L_SQUARE_BRACKET MOD
%token R_SQUARE_BRACKET FUNCTION BEGIN_PARAMS WHILE
%token BEGIN_LOCALS END_LOCALS BEGIN_BODY END_BODY
%token INTEGER ARRAY OF IF THEN ENDIF ELSE DIV
%token DO BEGINLOOP ENDLOOP CONTINUE READ WRITE
%token AND OR FOR NOT TRUE RETURN ADD SUB MULT
%token LTE GTE ASSIGN FALSE ERRTOK
%token IDENT NUMBER

%right ASSIGN
%left  OR
%left  AND
%right NOT
%left  LT GT LTE GTE EQ NEQ
%left  ADD SUB
%left  MULT DIV MOD
%left  L_SQUARE_BRACKET R_SQUARE_BRACKET
%left  L_PAREN R_PAREN

%type <dec_type> prog_start function functions declarations statements ident
%type <dec_type> declaration identifiers integer statement number term var
%type <dec_type> vars expression mult_expression bool_exp relation_exp
%type <dec_type> relation_and_exp comparison
%type <string> IDENT INTEGER L_PAREN R_PAREN SUB ADD  MULT DIV LTE GTE
%type <string> EQ NEQ LT GT MOD L_SQUARE_BRACKET R_SQUARE_BRACKET
%type <int> NUMBER

	/* %type <int> NUMBER  issues with number*/
%%

%start prog_start;

prog_start:     functions
                {cout << $1.code << "\n";}
                ;

function:       FUNCTION ident SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY
                {$$.code = "func " + $2.code + "\n";
		 $$.code += $5.code + "\n";
		 /* for loop for multiple idents  */
		 for (int i = 0; i < $5.ids.size(); ++i) 
		 {
		 	$$.code += "= " + $5.ids[i] + ", $" + std::to_string(i); /* itoa(i) not in c++ */
		 }
		 $$.code += $8.code + "\n";
		 $$.code += $11.code + "\n";
		 $$.code += "endfunc"; 
		}
                ;

functions:      /* epsilon */
                {$$.code = "";}
                | function functions
                {$$.code = $1.code + "\n" + $2.code;}
                ;

ident:       	IDENT
              	{$$.code = $1;}
                ;

integer: 	INTEGER
		{$$.code = $1;}
		;

number:		NUMBER
		{$$.code = $1;}
		;

declaration:    identifiers COLON integer
                {$$.code = $1.code + $3.code;
		 for (int i = 0; i < $1.ids.size(); ++i)
		 {
		 	$$.code += ". " + $1.ids[i] + "\n"; /* prints out ". id" then newline  */
		 }
		}
                |
                identifiers COLON ARRAY L_SQUARE_BRACKET number R_SQUARE_BRACKET OF integer
                {$$.code = $1.code + $5.code + $8.code;
                 for (int i = 0; i < $1.ids.size(); ++i)
                 {
                        $$.code += ". []" + $1.ids[i] + ", " + std::to_string(i); /* prints out ". [] id, size of array" then newline  */
                 }

		}
                |
                identifiers COLON ARRAY L_SQUARE_BRACKET number R_SQUARE_BRACKET L_SQUARE_BRACKET number R_SQUARE_BRACKET OF integer
                {$$.code = $1.code + $5.code + $8.code + $11.code;
                 for (int i = 0; i < $1.ids.size(); ++i)
                 {
                        $$.code += ". [][]" + $1.ids[i] + ", " + std::to_string(i); /* prints out ". [] id, size of array" then newline  */
                 }
		}
		;

declarations:   /* epsilon */
                {$$.code = "";}
                |
                declaration SEMICOLON declarations
                {$$.code = $1.code + $3.code;}
                ;

identifiers:    IDENT
                {$$.code = $1;}
                |
                identifiers COMMA IDENT
                {$$.code = $1.code + $3;}
                ;


term:           number
                {$$.code = $1.code;}
		|
                var
                {$$.code = $1.code;}
		|
		L_PAREN expression R_PAREN  /* $$.code = $1 + $3   */
		{$$.code = $1 + $3;}
		|
		L_PAREN mult_expression R_PAREN
		{$$.code = $1 + $3;}
		|
		SUB number
                {$$.code = $1;}
                |
                SUB var
                {$$.code = $1;}
                |
                SUB L_PAREN expression R_PAREN
                {$$.code = $1 + $2 + $4;}
		|
		IDENT L_PAREN expression R_PAREN
		{$$.code = $1 + $2 + $4;}
		|
		IDENT L_PAREN mult_expression R_PAREN
		{$$.code += $1 + $2 + $4;}
                ;

var:            ident
                {$$.code = $1.code;}
                |
                IDENT L_SQUARE_BRACKET expression R_SQUARE_BRACKET
                {$$.code = $1 + $2 + $4;}
                |
                IDENT L_SQUARE_BRACKET expression R_SQUARE_BRACKET L_SQUARE_BRACKET expression R_SQUARE_BRACKET
                {$$.code = $1 + $2 + $4 + $5 + $7;}
                ;

vars:           var COMMA vars
                {$$.code = $1.code + $3.code;}
                |
                var
                {$$.code = $1.code;}
                ;

statement:      var ASSIGN expression
                {$$.code = $1.code + $3.code;
		}
                |
                IF bool_exp THEN statements ENDIF
                {$$.code = $2.code + $4.code;
		 cout << "?:= " << $2.code << "\n";	
		}
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
                {$$.code = $2.code;
		 cout << ".< " << $2.code << "\n";
		}
                |
                WRITE vars
                {$$.code = $2.code;
		 cout << ".> " << $2.code << "\n";
		}
                |
                CONTINUE
                {printf("statement -> CONTINUE\n");}
                |
                RETURN expression
                {printf("statement -> RETURN expression\n");}
		|
		var ERRTOK expression
                ;

statements:     /* epsilon */
                {$$.code = "";}
                |
                statement SEMICOLON statements
                {$$.code = $1.code + $3.code;}               	
		;


expression:     mult_expression
                {$$.code = $1.code;}
                |
                mult_expression SUB mult_expression
                {printf("expression -> multiplicative_expression SUB multiplicative_expression\n");}
                |
                mult_expression ADD mult_expression
                {printf("expression -> multiplicative_expression ADD multiplicative_expression\n");}
                ;

mult_expression: term
                {$$.code = $1.code;}
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
                {$$.code = $1;}
                |
                GT
                {$$.code = $1;}
                |
                EQ
                {$$.code = $1;}
                |
                NEQ
                {$$.code = $1;}
                |
                LTE
                {$$.code = $1;}
                |
                GTE
                {$$.code = $1;}
                ;



%%

int main(int argc, char *argv[])
{
	yy::parser p;
	return p.parse();
}

void yy::parser::error(const yy::location& l, const std::string& m)
{
	std::cerr << l << ": " << m << std::endl;
}
