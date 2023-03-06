#include <main_header.h>
#define __MY_STACK_VAR__

int main(int argc, char** argv)
{
    // if (welcome_error(argc))
    // {
    //     return EXIT_FAILURE;
    // }
    char test[17] = "( 23 + 24 ) / 5 ";
    char** tokens = NULL;
    tokens = dirty_split(test, ' ');
    printf("First split token   : %s\n", tokens[0]);
    printf("Precedence of    +  : %d\n", establish_precedence("+")); // Output: "Precedence of +: 1"
    printf("Associativity of -  : %s\n", establish_associativity("-")); // Output: "Associativity of -: left"
    printf("Associativity of ^  : %s\n", establish_associativity("^")); // Output: "Associativity of ^: right"
    printf("Is an operator      : %i\n", is_operator(")"));
    push("+");
    printf("stack top           : %s\n", stack[top]);
    push("-");
    printf("stack top           : %s\n", stack[top]);
    push("*");
    printf("stack top           : %s\n", stack[top]);
    printf("Check associativity : %i\n", associativity_check("*"));
    printf("Check associativity : %i\n", associativity_check("+"));
    printf("Check precedence    : %i\n", precedence_check("*"));
    printf("Check precedence    : %i\n", precedence_check("+"));
    printf("stack pop           : %s\n", pop());
    printf("stack pop           : %s\n", pop());
    printf("stack pop           : %s\n", pop());
    shunting_yard_algo(tokens);
    free(tokens);
    return 0;
}