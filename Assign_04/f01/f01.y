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
extern char buffer[100];
typedef struct symbol_data{
	char symbol;
	struct symbol_data *link;
} Symbol_Data;
typedef struct index_data{
	int index;
	struct index_data *link;
} Index_Data;
Symbol_Data *symbol_head = NULL, *symbol_tail = NULL, *symbol_hold = NULL;
Index_Data *index_head = NULL, *index_tail = NULL, *index_hold = NULL;
int is_Singular = 1, is_Array = 0, is_tab = 0;
void reset();
Symbol_Data *set_symbol(char symbol);
Index_Data *set_index(int index);
%}
%token VAR CHARACTER INTEGER RECORD BEGINX END INDEX SYM SYM_LONG
%union { char symbol; int type; char* symbol_ptr;}
%type<symbol> SYM 
%type<type> TYPE INDEX INDEXES INDEX_SYM
 
%%
STR1 : STR2 { exit(EXIT_SUCCESS); }
;
STR2 : STR3 STR2
     | STR4 STR2
     |  
;
STR3 : VARS ':' TYPE IS_ARRAY ';' 
		{
			if(is_Array==1 && is_Singular==0){
				fprintf(yyout, "%s", " syntax error multiple array declared in single line \0");
				yyerror(" syntax error multiple array declared in single line \0");
			}else{
				if(is_tab==1){
					fprintf(yyout, "%c", '\t');
				}
				if($3==1){
					fprintf(yyout, "%s", "char ");
				}else if($3==2){
					fprintf(yyout, "%s", "int ");
				}else{
					yyerror(" unknown type");
				}
				
			}
			if(is_Array==0){
				if(symbol_hold!=NULL){
					fprintf(yyout, "%c", symbol_hold->symbol);
					if(symbol_head!=NULL){
						fprintf(yyout, "%c", ',');
					}
					free(symbol_hold);
					symbol_hold = NULL;
				}else{
					yyerror(" no var name given");
				}
				Symbol_Data *ptr = symbol_head, *ptr2;
				while(ptr!=NULL){
					fprintf(yyout, "%c", ptr->symbol);
					ptr2 = ptr;
					ptr = ptr->link;
					if(ptr!=NULL){
						fprintf(yyout, "%c", ',');
					}
					free(ptr2);
				}
				symbol_head = symbol_tail = NULL;
			}else{
				if(symbol_hold!=NULL){
					fprintf(yyout, "%c", symbol_hold->symbol);
					free(symbol_hold);
					symbol_hold = NULL;
				}else{
					yyerror(" no var name given");
				}
				if(index_hold!=NULL){
					fprintf(yyout, "%c", '[');
                                        fprintf(yyout, "%d", index_hold->index);
                                        fprintf(yyout, "%c", ']');
					free(index_hold);
					index_hold = NULL;
				}else{
					yyerror(" index error");
				}
				Index_Data *ptr = index_head, *ptr2;
				while(ptr!=NULL){
					fprintf(yyout, "%c", '[');
					fprintf(yyout, "%d", ptr->index);
					fprintf(yyout, "%c", ']');
					ptr2 = ptr;
					ptr = ptr->link;
					free(ptr2);
				}		
				index_head = index_tail = NULL;		
			}
			fprintf(yyout, "%s", ";\n");		
			reset();
		}
;
VARS : SYM 
		{ 
			symbol_hold = set_symbol($1);		
		}
 
     | VARS ',' SYM
		{
			Symbol_Data *ptr = set_symbol($3);
			if(symbol_head==NULL || symbol_tail==NULL){
				symbol_head = symbol_tail = ptr;
			}else{
				symbol_tail->link = ptr;
				symbol_tail = ptr;
			}
			is_Singular = 0;
		}
;
TYPE : CHARACTER { $$ = 1; } 
     | INTEGER { $$ = 2;  } 
;
IS_ARRAY : '[' INDEXES ']' { is_Array = 1; } 
	 | { is_Array = 0; } 
;
INDEXES : INDEX_SYM 
		{
			index_hold = set_index($1);
		}
	| INDEXES ',' INDEX_SYM
		{
			Index_Data *ptr = set_index($3);
			if(index_head==NULL || index_tail==NULL){
				index_head = index_tail = ptr;
			}else{
				index_tail->link = ptr;
				index_tail = ptr;
			}
		}
;
INDEX_SYM : INDEX '.' '.' INDEX 
		{ 
			if($1!=0 || $4<=$1){
				yyerror(" invalid index");	
			}else{ 
				$$ = $4;				
			}
		} 
;
STR4 : STR5 STR6 STR7 END ';'
	{ 
		fprintf(yyout, "%s", "} ");
		fprintf(yyout, "%s", buffer);
		fprintf(yyout, "%s", ";\n");
		is_tab = 0;
	} 
;
STR5 : SYM_LONG ':' RECORD 
	{ 
		fprintf(yyout, "%s", "struct \n{\n"); 
		is_tab = 1;
	} 
;   
STR6 : BEGINX ':'
;
STR7 : STR3 STR7
     |
;
%%
void reset(){
	symbol_head = symbol_tail = symbol_hold = NULL;
	index_head = index_tail = index_hold = NULL;
	is_Singular = 1, is_Array = 0;
}
Symbol_Data *set_symbol(char symbol){
	Symbol_Data *ptr = (Symbol_Data*)malloc(sizeof(Symbol_Data));
	ptr->symbol = symbol;
	ptr->link = NULL;
	return ptr;
}
Index_Data *set_index(int index){
	Index_Data *ptr = (Index_Data*)malloc(sizeof(Index_Data));
	ptr->index = index;
	ptr->link = NULL;
	return ptr;
}
int yywrap(){
	return 1;
}
int main(){
	
	yyparse();
	
	return 0;
}
int yyerror(char* msg){
	reset();
        printf("//%s\tLINE # : %d\n", msg, yylineno);
        exit (EXIT_FAILURE);
        return 0;
}

