%{

#include "y.tab.h"
extern char* yytext;

%}

%%

a return A;

b return B;

.|\n return yytext[0];

%%
