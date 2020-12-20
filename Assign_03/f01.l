%{
#include "y.tab.h"
extern int yyerror();
extern char *yytext;

%}

%option yylineno

%%

"char" { return CHAR; }
"int" { return INT; }
"float" { return FLOAT; }
"double" { return DOUBLE; }
"struct" { return STRUCT; }
[0-9]+ { return INDEX; }
[a-z] { yylval.symbol = yytext[0]; return SYM; }
[ \t\n] {;}
; { return yytext[0]; }
. { return yytext[0]; }

%%
