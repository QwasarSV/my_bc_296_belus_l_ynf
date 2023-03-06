#include <main_header.h>

int get_array_size(char** tokens)
{
    int size = 0;
    while (tokens[size] != NULL)
    {
        size += 1;
    }
    return size;
}


char** shunting_yard_algo(char ** tokens)
{   
    char** result = NULL;
    int size = get_array_size(tokens);
    result = malloc(sizeof(char*)*size + 1);
    result[size + 1] = NULL;

    int index = 0;
    while(tokens[index] != NULL)
    {
        if (my_is_digit(tokens[index][0]))
        {
            printf("Placeholder_00\n");
            // result[index] = my_strdup(tokens[0]);
            // index += 1;
        }
        else if (my_strcmp(tokens[index], O_PARENTHESIS))
        {
            printf("Placeholder_01\n");
        }
        else if (my_strcmp(tokens[index], C_PARENTHESIS))
        {
            printf("Placeholder_02\n");
        }
        else if (is_operator(tokens[index]))
        {
            while (precedence_check(tokens[index]))
            {
                printf("Placeholder_03\n");
            }
        }
        index += 1;
    }
    free(result);
    // return result; 
}