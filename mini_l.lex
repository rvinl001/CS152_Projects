/*variables*/
%{
   #include "y.tab.h"
   int currLine = 1, currPos = 1;
%}

DIGIT    [0-9]
LETTER   [a-zA-Z]

%%
"function"      {currPos += yyleng; return FUNCTION;}
"return"        {currPos += yyleng; return RETURN;}
"beginparams"   {currPos += yyleng; return BEGIN_PARAMS;}
"endparams"     {currPos += yyleng; return END_PARAMS;}
"beginlocals"   {currPos += yyleng; return BEGIN_LOCALS;}
"endlocals"     {currPos += yyleng; return END_LOCALS;}
"beginbody"     {currPos += yyleng; return BEGIN_BODY;}
"endbody"       {currPos += yyleng; return END_BODY;}
"if"            {currPos += yyleng; return IF;}
"else"          {currPos += yyleng; return ELSE;}
"endif"         {currPos += yyleng; return ENDIF;}
"while"         {currPos += yyleng; return WHILE;}
"read"          {currPos += yyleng; return READ;}
"write"         {currPos += yyleng; return WRITE;}
"integer"       {currPos += yyleng; return INTEGER;}
"then"          {currPos += yyleng; return THEN;}
"array"         {currPos += yyleng; return ARRAY;}
"of"            {currPos += yyleng; return OF;}
"do"            {currPos += yyleng; return DO;}
"for"		{currPos += yyleng; return FOR;}
"beginloop"     {currPos += yyleng; return BEGINLOOP;}
"endloop"       {currPos += yyleng; return ENDLOOP;}
"continue"      {currPos += yyleng; return CONTINUE;}
"false"         {currPos += yyleng; return FALSE;}
"true"          {currPos += yyleng; return TRUE;}
"("             {currPos += yyleng; return L_PAREN;}
")"             {currPos += yyleng; return R_PAREN;}
"["             {currPos += yyleng; return L_SQUARE_BRACKET;}
"]"             {currPos += yyleng; return R_SQUARE_BRACKET;}
"*"             {currPos += yyleng; return MULT;}
"/"             {currPos += yyleng; return DIV;}
"%"             {currPos += yyleng; return MOD;}
"-"             {currPos += yyleng; return SUB;}
"+"             {currPos += yyleng; return ADD;}
"<"             {currPos += yyleng; return LT;}
"<="            {currPos += yyleng; return LTE;}
">"             {currPos += yyleng; return GT;}
">="            {currPos += yyleng; return GTE;}
"=="            {currPos += yyleng; return EQ;}
"<>"            {currPos += yyleng; return NEQ;}
"not"           {currPos += yyleng; return NOT;}
"and"           {currPos += yyleng; return AND;}
"or"            {currPos += yyleng; return OR;}
":="            {currPos += yyleng; return ASSIGN;}
";"             {currPos += yyleng; return SEMICOLON;}
":"             {currPos += yyleng; return COLON;}
","             {currPos += yyleng; return COMMA;}
{DIGIT}+        {currPos += yyleng; return NUMBER;}

[a-zA-Z][a-zA-Z0-9_]*[a-zA-Z0-9]|[a-zA-Z]  {currPos += yyleng; yylval.str = strdup(yytext); return IDENT;}
[\t]+           {currPos += yyleng;}
" "             {currPos++;}
"\n"            {currLine++; currPos = 1;}
"##".*          {currPos = 1;}

 .                    {printf("Error at line %d, column %d: unrecognized symbol \"%s\"\n", currLine, currPos, yytext); exit(0);}
[0-9_]+[a-zA-Z][a-zA-Z0-9_]*[a-zA-Z0-9]|[0-9_]+[a-zA-Z]     {printf("Error at line %d, column %d: identifier \"%s\" must begin with a letter\n", currLine, currPos, yytext); exit(0);}
[a-zA-Z][a-zA-Z0-9_]*[a-zA-Z0-9][_]+|[a-zA-Z][_]+           {printf("Error at line %d, column %d: identifier \"%s\" cannot end with an underscore\n", currLine, currPos, yytext); exit(0);}

%%
