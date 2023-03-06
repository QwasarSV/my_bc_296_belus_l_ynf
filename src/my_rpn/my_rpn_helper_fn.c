#include <main_header.h>
//need to be of char* type and make use of strcmp for later evolution (if operator > 1 ch)

int my_add(int left, int right)
{
    return left + right;
}

int my_substract(int left, int right)
{
    return left - right;
}

int my_mult(int left, int right)
{
    return left * right;
}

int my_divide(int left, int right)
{
    return left / right;
}

int my_modulo(int left, int right)
{
    return left % right;
}

bool is_operator(char* token)
{
    if (token == NULL)
    {
        return false;
    } 
    char operator_token[][2] = {"+", "-", "*", "/", "^", "%", "\0"};
    int index = 0;
    while (index < 5)
    {
        if (my_strcmp(operator_token[index], token) == 0) 
        {
            return true;
        }
        index += 1;
    }
    return false;
}

int count_digits(int val)
{
    if(val == 0)
    {
        return 1;
    }
    int len = 0;
    while (val != 0)
    {
        len += 1;
        val /= 10;
    }
    return len;
}

int to_int(char* token)
{
    int len = my_strlen(token);
    return my_ctoi(token, len);
}

char* to_str(int val, char* buff)
{
    free(buff);
    int size = count_digits(val);
    buff = malloc(sizeof(char) * val);
    my_itoa(val, buff, 10);
    return buff;
}

void delete_tokens(char **tokens, int *size, int pos)
{
    int index = pos;
    while (index < *size - 1)
    {
        free(tokens[index]);
        tokens[index] = my_strdup(tokens[index + 1]);
        index +=1;
    }
    (*size)--;
}

int free_result(char**tokens)
{
    int index = 0;
    while (index < top)
    {
        free(tokens[index]);
        index += 1;
    }
}