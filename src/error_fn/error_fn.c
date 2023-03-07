#include <main_header.h>

int welcome_error(int val)
{
    if (val > ARG_SIZE || val == 1)
    {
        write(STDERR_FILENO, ERR_MSG_MAX_ARG, SIZE_ERR_MSG_MAX);
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}

bool is_spaced_out(char* str)
{
    int index = 0;
    while (str[index] != '\0')
    {
        if (str[index] == ' ')
        {
            return true;
        }
        index += 1;
    }
    return false;
}

bool divide_error(char* str)
{
    if (my_strstr(str, DIVZERO) == NULL)
    {
        return true;
    }
    write(STDERR_FILENO, DIVZERO_ERR, SIZE_DIVZERO);
    return false;
}

bool raise_format_error(int nb_arg)
{
    if (nb_arg < 2)
    {
        return true;
    }
    return false;
}

char* space_out_str(char* str)
{
    int len = my_strlen(str);
    char* new = malloc(sizeof(char) * len * 2);
    int index = 0;
    int jndex = 0;
    while (index < len)
    {
        new[jndex++] = str[index];
        new[jndex++] = ' ';
        index += 1;
    }
    new[jndex - 1] = '\0';
    return new;
}

char* check_user_arg(char* str)
{
    char* str_ptr = NULL;
    if (!(is_spaced_out(str)))
    {
        str = space_out_str(str);
    }
    if (!divide_error(str))
    {
        return NULL;
    }

    return str;
}
