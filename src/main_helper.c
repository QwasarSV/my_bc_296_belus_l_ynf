#include <main_header.h>

void free_bc(char** tokens, char** result, char* ptr)
{
    free(tokens);
    free(result);
    free(ptr);
}

int my_bc(char** tokens, char** result, char* ptr)
{
    int success_code = 0;
    tokens = dirty_split(ptr, ' ');
    result = shunting_yard_algo(tokens);
    success_code = perform_op(result, top);
    if (success_code)
    {
        free_bc(tokens, result, ptr);
        return EXIT_FAILURE;
    }
        free_bc(tokens, result, ptr);
    return success_code;
}