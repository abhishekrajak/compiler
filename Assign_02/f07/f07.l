%{
#include "y.tab.h"
extern int yyerror();
extern char *yytext;
%}
%option yylineno
%%
"main" { return MAIN; }
"int" { return INT; }
"INT" { return INT; }
"float" { return FLOAT; }
"FLOAT" { return FLOAT; }
"if" { return IF; }
"else if" { return ELSEIF; }
"else" { return ELSE; }
"for" { return FOR; }
"while" { return WHILE; }
"do" { return DO; }
"read" { return READ; }
"print" { return PRINT; }
"&&" { return AND; }
"||" { return OR; }
"<=" { return LE; }
">=" { return GE; }
">" { return GT; }
"<" { return LT; }
"!=" { return NE; }
"++" { return INC; }
"--" { return DEC; }
"==" { return EQ; }
"+=" { return INC_BY; }
"-=" { return DEC_BY; }
"*=" { return MUL_BY; }
"/=" { return DIV_BY; }
[a-zA-Z]+ {return ALP; }
[0-9]+ { return NUM; }
[ \t\n] {;}
; { return yytext[0]; }
. { return yytext[0]; }
%%

