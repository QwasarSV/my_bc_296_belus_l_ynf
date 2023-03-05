#ifndef __SHUNTING_YARD_HEADER_
#define __SHUNTING_YARD_HEADER_

#include <main_header.h>

    // #ifndef STRUCT_TOKEN
    // #define STRUCT_TOKEN
    // struct token
    // {
    //     char*   my_operator;
    //     int     op_precedence;
    //     char*   associativity;
    // };
    // typedef token_t;
    // #endif

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


int     establish_precedence(char* tokens);
char*   establish_associativity(char* tokens);

#endif