#include <main_header.h>

    char* stack[MAX_INPUT_TOKENS];
    int top = -1;

int push(char* token)
{
    if (top > MAX_INPUT_TOKENS) 
    {
        write(STDERR_FILENO, OVERFLOW, my_strlen(OVERFLOW));
        return EXIT_FAILURE;
    }
    stack[++top] = my_strdup(token);
    return EXIT_SUCCESS;
}

char* pop()
{
    if (top > MAX_INPUT_TOKENS) 
    {
        write(STDERR_FILENO, UNDERFLOW, my_strlen(UNDERFLOW));
        return NULL;
    }
    return stack[top--];
}