#include <main_header.h>

token_t preced_assoc_l[] = {
    {"+",   1, "left"},
    {"-",   1, "left"},
    {"*",   2, "left"},
    {"/",   2, "left"},
    {"^",   3, "right"},
    {"%",  3, "left"},
    {NULL,  0, NULL}
};

int establish_precedence(char* token)
{
    int index = 0;
    while (preced_assoc_l[index].tk != NULL)
    {
        if (my_strcmp(token, preced_assoc_l[index].tk) == 0)
        {
            return preced_assoc_l[index].tk_precedence;
        }
        index += 1;
    }
    return ERROR;
}

char* establish_associativity(char* tokens)
{
    int index = 0;
    while (preced_assoc_l[index].tk != NULL)
    {
        if (my_strcmp(tokens, preced_assoc_l[index].tk) == 0)
        {
            return preced_assoc_l[index].tk_associativity;
        }
        index += 1;
    }
    return "NULL";
}

bool my_is_digit(char ch)
{
    if (ch > '0' && ch < '9')
    {
        return true;
    }
    return false;
}

int is_empty(char** arr)
{
    return arr[0] == NULL;
}

int last_element(char** arr)
{
    int len = 0;
    while (arr[len] != NULL)
    {
        len += 1;
    }
    return len;
}

bool associativity_check(char* token, char** stack)
{
    int last = last_element(stack);
    if (establish_precedence(token) == establish_precedence(stack[last]) &&
        my_strcmp(establish_associativity(token), "left") == 0)
    {
        return true;
    }
    return false;
}

bool precedence_check(char* token, char** stack)
{
    int last = top;
    if (!(is_empty(stack)) && is_operator(stack[last]))
    {
        if (establish_precedence(token) < establish_precedence(stack[last]) ||
        associativity_check(token, stack))
        {
            return true;
        }
    }
    return false;
}

void clear_stack(char** stack, char** result)
{
    int last = last_element(stack);
    while (my_strcmp(stack[last], O_PARENTHESIS))
    {

    }
}
