%{
#include "y.tab.h"
extern int yyerror();
extern char *yytext;
%}
%option yylineno
%%
"for" { return FOR; }
"<=" { return LE; } 
">=" { return GE; }
"<" { return LT; }
">" { return GT; }
"!=" { return NE; }
"++" { return INC; }
"--" { return DEC; }
[0-9]+ { yylval.value = atoi(yytext); return VALUE; }
[A-Za-z]+ { strcpy(yylval.symbol, yytext); return ID; }
[ \t\n] {;}
; { return yytext[0]; }
. { return yytext[0]; }
%%

