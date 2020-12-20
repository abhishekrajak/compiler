%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern char *yytext;
extern int yylineno;
extern int yylex();
extern int yywrap();
extern int yyerror(char* msg);
extern FILE *yyout;
int tab = 0;
char* decode_REL(int type);
void display_tab();
%}
%token FOR VALUE ID LT LE GT GE NE INC DEC
%union { char symbol[20]; int value; }
%type<symbol> ID 
%type<value> VALUE REL OP 
%%
STR : FOR_LOOP
;
FOR_LOOP : FOR '(' AB ID OP ')' '{' STR2 '}' 
	 {
		display_tab();
                fprintf(yyout, "%s%s%s", $4, decode_REL($5), ";\n");
		tab--;
		display_tab();
		fprintf(yyout, "%s", "}\n"); 
		 
	 } 
;
STR2 : STATEMENT STR2
     | FOR_LOOP STR2
     |
;
AB : ID '=' VALUE ';' ID REL VALUE ';' 
   	{
		display_tab();
   		fprintf(yyout, "%s %c %d%s", $1, '=', $3, ";\n");	
		display_tab();
		fprintf(yyout, "%s %s %s %d %s", "while(", $5, decode_REL($6), $7,")\n");
		display_tab();
		fprintf(yyout, "%s", "{\n");
		tab++;
	} 
;
REL : LT { $$ = 1; } 
    | GT { $$ = 2; } 
    | LE { $$ = 3; } 
    | GE { $$ = 4; } 
    | NE { $$ = 5; } 
;
OP : INC { $$ = 6; } 
   | DEC { $$ = 7; }
;
STATEMENT : ID '=' ID ';' { 
	  			display_tab();
				fprintf(yyout, "%s %c %s%s", $1, '=', $3, ";\n"); 
			  } 
     	  | ID '=' VALUE ';' 
			  { 
				display_tab();	
				fprintf(yyout, "%s %c %d%s", $1, '=', $3, ";\n"); 
			  } 
;
%%
char* decode_REL(int type){
	char *ptr = NULL;
	switch(type){
		case 1 : ptr = "<";
			 break;
		case 2 : ptr = ">";
			 break;
		case 3 : ptr = "<=";
			 break;
		case 4 : ptr = ">=";
			 break;
		case 5 : ptr = "!=";
			 break;
		case 6 : ptr = "++";
			 break;
		case 7 : ptr = "--";
			 break;
		default : ptr = "unknown op.";
			 break;
	}
	return ptr;
}
void display_tab(){
	int i;
        for(i=0; i<tab; i++){
                fprintf(yyout, "%c", '\t');
        }
}
int yywrap(){
	return 1;
}
int main(){
	
	yyparse();
	
	return 0;
}
int yyerror(char* msg){
	fprintf(yyout, "//%s\tLINE # : %d\n", msg, yylineno);
        exit (EXIT_FAILURE);
        return 0;
}

