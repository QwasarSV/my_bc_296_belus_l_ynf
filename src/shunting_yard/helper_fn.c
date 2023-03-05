#include <main_header.h>
#include <shunting_yard.h>

    token_t preced_assoc_l[] = {
        {"+",   1, "left"},
        {"-",   1, "left"},
        {"*",   2, "left"},
        {"/",   2, "left"},
        {"^",   3, "right"},
        {"%",  3, "left"},
        {NULL,  0, NULL}
    };

    // token_t associativity_l[] = {
    //     {"+",   0, "right"},
    //     {"-",   0, "right"},
    //     {"*",   0, "right"},
    //     {"/",   0, "right"},
    //     {"^",   0, "right"},
    //     {"%",   0, "right"},
    //     {NULL,  0, NULL}
    // };

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