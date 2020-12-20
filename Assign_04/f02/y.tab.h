#define FOR 257
#define VALUE 258
#define ID 259
#define LT 260
#define LE 261
#define GT 262
#define GE 263
#define NE 264
#define INC 265
#define DEC 266
typedef union { char symbol[20]; int value; } YYSTYPE;
extern YYSTYPE yylval;
