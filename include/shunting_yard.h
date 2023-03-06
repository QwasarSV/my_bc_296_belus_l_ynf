#ifndef __SHUNTING_YARD_HEADER_
#define __SHUNTING_YARD_HEADER_

#include <main_header.h>

#define LEFT "left"
#define O_PARENTHESIS "("
#define C_PARENTHESIS ")"

#ifndef STRUCT_TOKEN
#define STRUCT_TOKEN
struct token_struct 
{
    char*   tk; // represent operator
    int     tk_precedence;
    char*   tk_associativity;
};
typedef struct token_struct token_t;
#endif

char**  shunting_yard_algo(char ** tokens);
int     establish_precedence(char* tokens);
char*   establish_associativity(char* tokens);
bool    my_is_digit(char ch);
int     last_element(char** arr);
bool    associativity_check(char* token);
bool    precedence_check(char* token);

#endif