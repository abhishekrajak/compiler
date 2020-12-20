%{
#include "y.tab.h"
extern int yyerror();
extern char *yytext;
%}

%option yylineno

%%

"while" { return WHILE; }
"begin" { return BEGINX; }
"end" { return END; }
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
[a-zA-Z]+ {return ALP; }
[0-9]+ { return NUM; }
[ \t\n] {;}
; { return yytext[0]; }
. { return yytext[0]; }

%%
