%{
#include "y.tab.h"
extern int yyerror();
extern char *yytext;
char buffer[100];
%}
%option yylineno
%%
"var" { return VAR; }
"char" { return CHARACTER; }
"integer" { return INTEGER; }
"record" { return RECORD; }
"begin" { return BEGINX; }
"end" { return END; }
[0-9]+ { yylval.type = atoi(yytext); return INDEX; }
[A-Za-z]+ { 
		if(strlen(yytext)>1){
			strcpy(buffer, yytext); return SYM_LONG;
		}else{
			yylval.symbol = yytext[0]; return SYM;
		} 
	}
[ \t\n] {;}
; { return yytext[0]; }
. { return yytext[0]; }
%%

