#include <main_header.h>

char*   stack[MAX_INPUT_TOKENS];
int     top = -1;

int push(char* token)
{
    if (top > MAX_INPUT_TOKENS) 
    {
        write(STDERR_FILENO, OVERFLOW, my_strlen(OVERFLOW));
        return EXIT_FAILURE;
    }
    free(stack[top + 1]);
    stack[++top] = strdup(token);
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

int print_stack()
{
    printf("printing stack top is %i:", top);
    int index = 0; 
    while (index <= top)
    {
        printf("|%s|",stack[index]);
        index += 1;
    }
    printf("\n");
}