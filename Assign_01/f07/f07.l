%{

#include <stdio.h>

%}



%%

[+-/=*%] {

		ECHO;

		printf(" -> Operator\n");

	 }

.|\n;

%%



int yywrap(){

	return 1;

}



int main(){

	yylex();

	return 0;

}
