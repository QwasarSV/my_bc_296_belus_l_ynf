#include <main_header.h>

int main(int argc, char** argv)
{
    // if (welcome_error(argc))
    // {
    //     return EXIT_FAILURE;
    // }

    printf("Precedence of    +  : %d\n", establish_precedence("+")); // Output: "Precedence of +: 1"
    printf("Associativity of -  : %s\n", establish_associativity("-")); // Output: "Associativity of -: left"
    printf("Associativity of ^  : %s\n", establish_associativity("^")); // Output: "Associativity of ^: right"
}