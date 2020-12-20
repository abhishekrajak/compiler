%{

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

%}



%%

"Which lab" 	{

		 printf("Welcome to Systems Programming Lab ");

		}

"Lab name?" 	{

		 printf("Welcome to Systems Programming Lab ");

		}

. {}
%%



int yywrap(){

	return 1;

}

int main(){

	yylex();

	return 0;

}
