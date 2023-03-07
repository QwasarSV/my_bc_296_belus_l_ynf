#include <main_header.h>

int main(int argc, char** argv)
{
    if (welcome_error(argc))
    {
        return EXIT_FAILURE;
    }

    char* test_ptr = NULL;
    char** tokens = NULL;
    char** result = NULL;

    test_ptr = check_user_arg(argv[1]);

    if (test_ptr == NULL)
    {
        return EXIT_FAILURE;
    }
    // printf("%s\n", test_ptr);
    tokens = dirty_split(test_ptr, ' ');
    
    result = shunting_yard_algo(tokens);

    perform_op(result, top);
    free(result);
    free(tokens);
    // free(test_ptr);
    return EXIT_SUCCESS;
}
    // printf("|%s|\n", test_ptr);
    // char test[] = "(3+2)*4";
    // char test[] = "( 23 + 3 ) * 4";
    // char test[] = "( 3 + 2 ) * 4";
    // printf("rpn result is  :|%i| \n",my_calculate(result, 2));
    // printf("pos is top %i\n", top);
    // tokens = dirty_split(test, ' ');
    // printf("First split token   : %s\n", tokens[0]);
    // printf("Precedence of    +  : %d\n", establish_precedence("+")); // Output: "Precedence of +: 1"
    // printf("Associativity of -  : %s\n", establish_associativity("-")); // Output: "Associativity of -: left"
    // printf("Associativity of ^  : %s\n", establish_associativity("^")); // Output: "Associativity of ^: right"
    // printf("Is an operator      : %i\n", is_operator(")"));
    // push("+");
    // printf("stack top           : %s\n", stack[top]);
    // push("-");
    // printf("stack top           : %s\n", stack[top]);
    // push("*");
    // printf("stack top           : %s\n", stack[top]);
    // printf("Check associativity : %i\n", associativity_check("*"));
    // printf("Check associativity : %i\n", associativity_check("+"));
    // printf("Check precedence    : %i\n", precedence_check("*"));
    // printf("Check precedence    : %i\n", precedence_check("+"));
    // printf("stack pop           : %s\n", pop());
    // printf("stack pop           : %s\n", pop());
    // printf("stack pop           : %s\n", pop());
