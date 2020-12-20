%{

#include <stdio.h>

int vowels = 0;

int consonants = 0;

%}



%%

[aeiouAEIOU] 	{	

			ECHO;

			printf(" Vowel\n");

			vowels++;

		}

[a-zA-Z] {

		ECHO;

		printf(" Consonant\n");

		consonants++;

	}

%%



int yywrap(){

	return 1;

}



int main(){

	yylex();

	printf("\nNumber of vowels : %d\n",vowels);

	printf("Number of consonants : %d\n",consonants);

	return 0;

}
