#include <main_header.h>
//need to be of char* type and make use of strcmp for later evolution (if operator > 1 ch)
bool is_operator(char* token)
{
    char operator_token[][2] = {"+", "-", "*", "/", "^", "%"};
    int index = 0;
    while (operator_token[index][0] != '\0')
    {
        if (my_strcmp(operator_token[index], token) == 0) 
        {
            return true;
        }
        index += 1;
    }
    return false;
}