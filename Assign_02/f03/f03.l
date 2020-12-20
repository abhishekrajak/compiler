%{
#include "y.tab.h"
extern int yyerror();
extern char* yytext;

%}

%option yylineno

%%

[0-9]*\.[0-9]+ {yylval.num = atof(yytext); return number;}
[0-9]+ {yylval.num = (float)atoi(yytext); return number;}
[ \t] {;}
[(] { return yytext[0];}
[)] { return yytext[0];}
[+] { return yytext[0];}
[-] { return yytext[0];}
[/] { return yytext[0];}
[*] { return yytext[0];}
[;?] { return 0;}
[\n] {;}
. {yyerror("invalid character");}

%%
