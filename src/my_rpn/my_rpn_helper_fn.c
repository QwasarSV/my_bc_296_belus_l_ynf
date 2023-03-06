#include <main_header.h>
//need to be of char* type and make use of strcmp for later evolution (if operator > 1 ch)
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