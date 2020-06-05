%{
#include <iostream>
#define YY_DECL yy::parser::symbol_type yylex()
#include "parser.tab.hh"

static yy::location loc;
%}

%option noyywrap 

%{
#define YY_USER_ACTION loc.columns(yyleng);
%}

	/* your definitions here */
DIGIT    [0-9]
LETTER   [a-zA-Z]
	/* your definitions end */

%%

%{
loc.step(); 
%}

	/* your rules here */
function	{return yy::parser::make_FUNCTION(loc);}
return        	{return yy::parser::make_RETURN(loc);}
beginparams   	{return yy::parser::make_BEGIN_PARAMS(loc);}
endparams    	{return yy::parser::make_END_PARAMS(loc);}
beginlocals 	{return yy::parser::make_BEGIN_LOCALS(loc);}
endlocals   	{return yy::parser::make_END_LOCALS(loc);}
beginbody   	{return yy::parser::make_BEGIN_BODY(loc);}
endbody     	{return yy::parser::make_END_BODY(loc);}
if          	{return yy::parser::make_IF(loc);}
else          	{return yy::parser::make_ELSE(loc);}
endif         	{return yy::parser::make_ENDIF(loc);}
while         	{return yy::parser::make_WHILE(loc);}
read          	{return yy::parser::make_READ(loc);}
write         	{return yy::parser::make_WRITE(loc);}
integer       	{return yy::parser::make_INTEGER(loc);}
then          	{return yy::parser::make_THEN(loc);}
array         	{return yy::parser::make_ARRAY(loc);}
of            	{return yy::parser::make_OF(loc);}
do            	{return yy::parser::make_DO(loc);}
for		{return yy::parser::make_FOR(loc);}
beginloop     	{return yy::parser::make_BEGINLOOP(loc);}
endloop       	{return yy::parser::make_ENDLOOP(loc);}
continue      	{return yy::parser::make_CONTINUE(loc);}
false         	{return yy::parser::make_FALSE(loc);}
true          	{return yy::parser::make_TRUE(loc);}
"("             {return yy::parser::make_L_PAREN(loc);}
")"             {return yy::parser::make_R_PAREN(loc);}
"["             {return yy::parser::make_L_SQUARE_BRACKET(loc);}
"]"             {return yy::parser::make_R_SQUARE_BRACKET(loc);}
"*"             {return yy::parser::make_MULT(loc);}
"/"             {return yy::parser::make_DIV(loc);}
"%"             {return yy::parser::make_MOD(loc);}
"-"             {return yy::parser::make_SUB(loc);}
"+"             {return yy::parser::make_ADD(loc);}
"<"             {return yy::parser::make_LT(loc);}
"<="            {return yy::parser::make_LTE(loc);}
">"             {return yy::parser::make_GT(loc);}
">="            {return yy::parser::make_GTE(loc);}
"=="            {return yy::parser::make_EQ(loc);}
"<>"            {return yy::parser::make_NEQ(loc);}
not           	{return yy::parser::make_NOT(loc);}
and           	{return yy::parser::make_AND(loc);}
or            	{return yy::parser::make_OR(loc);}
":="            {return yy::parser::make_ASSIGN(loc);}
";"             {return yy::parser::make_SEMICOLON(loc);}
":"             {return yy::parser::make_COLON(loc);}
","             {return yy::parser::make_COMMA(loc);}

	/*{DIGIT}+        {return yy::parser::make_NUMBER(convert, loc);} /* atoi function but this is c++?? */
{DIGIT}+        {return yy::parser::make_NUMBER(loc);} 
[a-zA-Z][a-zA-Z0-9_]*[a-zA-Z0-9]|[a-zA-Z]  {return yy::parser::make_IDENT(yytext, loc);}

[\t]+           {/*ignore whitespace*/ loc.step();}
" "             {/*ignore whitespace*/ loc.step();}
"\n"            {loc.step(); loc.lines();}
"##".*          {loc.step(); loc.lines();}
	/* use this structure to pass the Token :
	 * return yy::parser::make_TokenName(loc)
	 * if the token has a type you can pass it's value
	 * as the first argument. as an example we put
	 * the rule to return token function.
	 */

	/* if invalid identifier or symbol, then return error */
.               					    {return yy::parser::make_ERRTOK(loc);}
[0-9_]+[a-zA-Z][a-zA-Z0-9_]*[a-zA-Z0-9]|[0-9_]+[a-zA-Z]     {return yy::parser::make_ERRTOK(loc);}
[a-zA-Z][a-zA-Z0-9_]*[a-zA-Z0-9][_]+|[a-zA-Z][_]+           {return yy::parser::make_ERRTOK(loc);}




 <<EOF>>	{return yy::parser::make_END(loc);}
	/* your rules end */

%%
