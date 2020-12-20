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
	extern FILE* yyin;
	char file_name[101];
	
	printf("Enter file name : ");
	scanf("%s", file_name);	
	yyin = fopen(file_name, "r");
		
	yylex();
	return 0;
}
