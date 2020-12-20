%{


#include<stdio.h>


int valid=1;


%}


%token A B


%%


str:S'\n' 

{return 0;}



S:A S B
 |
 ;


%%



yywrap()


{


  return(1);


} 


main()


{
   printf("Enter the string:\n");


   yyparse();


   //if(valid==1)


   printf("valid string\n");


}


int yyerror(char *msg)


{
 printf("Invalid variable\n");
 

exit(0);


 return 0;


}
