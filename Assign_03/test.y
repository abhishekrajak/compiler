%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern char *yytext;
extern int yylineno;
extern int yylex();
extern int yywrap();
extern int yyerror(char* msg);

typedef struct var_data{
	char symbol;
	int is_Array;
	struct var_data* link;
} Var_Data;

typedef struct symbol_data{
	int type;
	int is_Array;
	char struct_symbol;
	struct symbol_data **link;	
}Symbol_Data;

Var_Data *top = NULL;
Symbol_Data *symbol_table[26];
Symbol_Data *struct_symbol_table[26];

void set_variable_tail(char symbol, int isArray);
void set_symbol_table(Symbol_Data* symbol_table[], Var_Data *top, int type);
void set_struct_node(char struct_symbol);
char* type_convert(int type);
int max(int x, int y);
int min(int x, int y);
void clear_memory();

Symbol_Data **temp_table = NULL;

%}

%union { char symbol; int type; }
%token CHAR INT FLOAT DOUBLE SYM STRUCT INDEX
%left '+' '-' '/' '*'
%type <symbol> SYM OP 
%type <type> TYPE SYMX SYMX2

%%

START : ST {printf("PASSED SUCCESSFULLY\n");
      	    exit (EXIT_SUCCESS);
	}
;

ST : INIT ST
   | STRUCTURE ST
   | STRUCTURE_INIT ST
   | ASSIGN ST
   | 

STRUCTURE : STRUCT SYM '{' ST2 '}' ';' {     set_struct_node($2); 
					     struct_symbol_table[$2-'a']->link = temp_table;  
					     temp_table = NULL;
					    
				       } 
;

INIT : TYPE VAR { set_symbol_table(symbol_table, top, $1); top = NULL; } 

;

ST2 : INIT2 ST2
    |  { if(temp_table==NULL){ 
		temp_table = (Symbol_Data**)calloc(26, sizeof(Symbol_Data*));
	 } 
       } 
;

INIT2 : TYPE VAR { if(temp_table==NULL){
                                        temp_table = (Symbol_Data**)calloc(26, sizeof(Symbol_Data*));
                                      }
                      set_symbol_table(temp_table, top, $1);
                      top = NULL;
                 }  

VAR  : SYM ';' { set_variable_tail($1, 0); }
     | SYM ',' VAR { set_variable_tail($1, 0); }
     | SYM '['INDEX']' ';' { set_variable_tail($1, 1); }
     | SYM '[' INDEX']' ',' VAR { set_variable_tail($1, 1); } 
;

TYPE : CHAR {$$ = 1;} 
     | INT {$$ = 2;}
     | FLOAT {$$ = 3;}
     | DOUBLE {$$ = 4;}
;

STRUCTURE_INIT : SYM VAR  { 
		     			
		     			if(struct_symbol_table[$1-'a']==NULL){
      						printf("struct of type %c has not been defined so declaration is not possible\n", $1);	
						yyerror("struct error");
						exit(EXIT_FAILURE);	
					}else{
						Symbol_Data *ptr;
						Var_Data *ptr2;
						while(top!=NULL){
							ptr = (Symbol_Data*)malloc(sizeof(Symbol_Data));
							ptr->type = 5;
							ptr->is_Array = top->is_Array;
							ptr->struct_symbol = $1;
							ptr->link = struct_symbol_table;
							symbol_table[top->symbol-'a'] = ptr;
							ptr2 = top;
							top = top->link;
							free(ptr2);
						}
						
					}
					
				} 
;

ASSIGN : SYMX2 '=' SYMX2 ';' { 
      				if($1>=1 && $1<=4 && $3>=1 && $3<=4){
       					if($1 > $3){
						printf("implicit type conversion in assignment operator from %s to %s in line_no : %d\n", type_convert($3), type_convert($1), yylineno);
					}else if($3 > $1){
						printf("explicit type conversion in assignment operator from %s to %s in line_no : %d\n", type_convert($3), type_convert($1), yylineno);	
					}else{
						
					}
				}else if($1==$3){
				
				}else{
					char *string_a = type_convert($1), *string_b = type_convert($3);
					int alloc_a = 0, alloc_b = 0;
					if(strcmp(string_a, "unknown type")==0){
						if($1>=(int)'a' &&  $1<=(int)'z'){
							alloc_a = 1;
							string_a = (char*)calloc(20, sizeof(char));
							strcpy(string_a, "struct-");
							string_a[strlen(string_a)] = (char)$1;
							
						}else if($1>=(int)'a'+100 &&  $1<=(int)'z'+100){
                                                        alloc_a = 1;
							string_a = (char*)calloc(20, sizeof(char));
                                                        strcpy(string_a, "struct-array-");
							$1-=100;
                                                        string_a[strlen(string_a)] = (char)$1;
                                                }

					}
					if(strcmp(string_b, "unknown type")==0){
                                                alloc_b = 1;
						if($3>=(int)'a' &&  $3<=(int)'z'){
                                                        alloc_b = 1;
							string_b = (char*)calloc(20, sizeof(char));
                                                        strcpy(string_b, "struct-");
                                                        string_b[strlen(string_b)] = (char)$3;
						
                                                }else if($3>=(int)'a'+100 &&  $3<=(int)'z'+100){
                                                        alloc_b = 1;
							string_b = (char*)calloc(20, sizeof(char));
                                                        strcpy(string_b, "struct-array-");
                                                        $3-=100;
                                                        string_a[strlen(string_a)] = (char)$3;
                                                }
                                        }
					
					printf("type conversion from %s to %s cannot be done\n", string_b, string_a);
					if(alloc_a==1){ free(string_a); }
                                        if(alloc_b==1){ free(string_b); }
					yyerror("incorrect assignment");
				}

			}
       
;

SYMX : SYM '.' SYM {   	
     			
			if(symbol_table[$1-'a']==NULL){
                        	printf("symbol %c does not exist\n", $1);
                        	yyerror("symbol error");
                	}
                	else{  
 				
                        	if(symbol_table[$1-'a']->type!=5){
					printf("you cannot use a dot operator with non-struct\n");
					yyerror("invalid operation");
				}else{	
					char struct_code = symbol_table[$1-'a']->struct_symbol;
					if(struct_symbol_table[(int)struct_code-(int)'a']==NULL){
						printf("struct %c does not exist\n", struct_code);
						yyerror("struct error");
					}else if((struct_symbol_table[(int)struct_code-(int)'a']->link)[(int)$3-'a']==NULL){
						printf("%c in struct %c does not exist\n", $3, struct_code);
						yyerror("struct error");
					}else{
						$$ = (struct_symbol_table[(int)struct_code-(int)'a']->link)[(int)$3-'a']->type;
						if((struct_symbol_table[(int)struct_code-(int)'a']->link)[(int)$3-'a']->is_Array == 1){
							$$+=10;
						}
					}

				}

                	}
		   }
     | SYM {    if(symbol_table[$1-'a']==NULL){
			printf("symbol %c does not exist in line_no : %d\n", $1, yylineno);
			yyerror("symbol error");
		}
		else{
			if(symbol_table[$1-'a']->type==5){
				$$ = (int)symbol_table[$1-'a']->struct_symbol;
				if(symbol_table[$1-'a']->is_Array==1){
					$$+=100;
				}
			}else{
				$$ = symbol_table[$1-'a']->type;
				if(symbol_table[$1-'a']->is_Array==1){
					$$+=10;
				}
			}
		}
	   } 
;

SYMX2 : SYMX2 OP SYMX { 
      				if($1>=5 || $3>=5){
					printf("operation %c not possible in struct\n", $2);
					yyerror("struct operation");
				}
      				if($1 != $3){
					printf("Implicit conversion from %s to %s in operator %c line no : %d\n", type_convert(min($1, $3)), type_convert(max($1, $3)), $2, yylineno);		
				}
				$$ = max($1, $3);
		     } 
      | SYMX { $$ = $1; }  
;

OP : '+' { $$ = '+'; } 
   | '-' { $$ = '-'; } 
   | '/' { $$ = '/'; } 
   | '*' { $$ = '*'; } 
;

    
%%

void set_variable_tail(char symbol, int is_Array){
	Var_Data* ptr = (Var_Data*)malloc(sizeof(Var_Data));
	ptr->symbol = symbol;
	ptr->is_Array = is_Array;
	ptr->link = NULL;
	if(top==NULL){
		top = ptr;
	}
	else{
		ptr->link = top;
		top = ptr;
	}
}

void set_symbol_table(Symbol_Data* symbol_table[], Var_Data *top, int type){
	if(type>=1 && type<=4){
		Var_Data *ptr = top, *temp = NULL;
		int index;
		while(ptr!=NULL){
			symbol_table[(index = ptr->symbol-'a')] = (Symbol_Data*)malloc(sizeof(Symbol_Data));
			symbol_table[index]->type = type;
			symbol_table[index]->is_Array = ptr->is_Array;
			symbol_table[index]->struct_symbol = 0;
			symbol_table[index]->link = NULL;
			temp = ptr;
			ptr = ptr->link;
			free(temp);
		}
	}else if(type==5){
		
	}else{
		printf("unknown type\n");
		exit(EXIT_FAILURE);
	}

}

void set_struct_node(char struct_symbol){
	int index;
	struct_symbol_table[(index = struct_symbol-'a')] = (Symbol_Data*)malloc(sizeof(Symbol_Data));
	struct_symbol_table[index]->type = 5;
	struct_symbol_table[index]->is_Array = 0;
	struct_symbol_table[index]->struct_symbol = struct_symbol;
}

int max(int x, int y){
	if(x>y){
		return x;
	}
	return y;
}

int min(int x, int y){
	if(x<y){
		return x;
	}
	return y;
}

char* type_convert(int type){
	char *data;
	switch(type){
		case 1 : data = "char";
			 break;
		case 2 : data = "int";
			 break;
		case 3 : data = "float";
			 break;
		case 4 : data = "double";
			 break;
		case 5 : data = "struct";
			 break;
		case 11 : data = "char-array";
			 break;
		case 12 : data = "int-array";
			 break;
		case 13 : data = "float-array";
			break;
		case 14 : data = "double-array";
			break;
		default : data = "unknown type";
			break;

	}
	return data;
}

void clear_memory(){
	Symbol_Data **ptr = NULL;
	int i;
	for(i=0; i<26; i++){
		if(symbol_table[i]!=NULL){
			free(symbol_table[i]);
			symbol_table[i] = NULL;
		}
		if(struct_symbol_table[i]!=NULL){
			ptr = struct_symbol_table[i]->link;
			free(struct_symbol_table[i]);
			struct_symbol_table[i] = NULL;
		}
		if(ptr!=NULL){
			int j;
			for(j=0; j<26; j++){
				if(ptr[j]!=NULL){
					free(ptr[j]);
					ptr[j] = NULL;
				}
			}
			free(ptr);
			ptr = NULL;
		}	
		
	}
}

int yywrap(){
	return 1;
}

int main(){
	
	
	yyparse();
	
	clear_memory();

	return 0;
}

int yyerror(char* msg){
        printf("FAILURE\n");
        printf("ERROR MESSAGE : %s\nLINE # : %d\nyytext : %s\n", msg, yylineno, yytext);
        exit (EXIT_FAILURE);
        return 0;
}

