%{
#include <stdio.h>
#include <stdlib.h>
int i=0;
%}
%%
[a-z A-Z]+ {
		printf("%d:%s", i, yytext);
		i++;
	   }
%%
int yywrap(){};
int main(){		
	yylex();
	return 0;
}
