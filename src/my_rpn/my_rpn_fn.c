#include <main_header.h>
s   
int my_calculate(char** tokens, int pos)
{
    int right = to_int(tokens[pos - 1]);
    int left  = to_int(tokens[pos - 2]);
    int (*fn_ptr)(int, int);

    switch (tokens[pos][0])
    {
    case '+':
        fn_ptr = my_add;
        break;
    case '-':
        fn_ptr = my_substract;
        break;
    case '*':
        fn_ptr = my_mult;
        break;
    case '/':
        fn_ptr = my_divide;
        break;
    case '%':
        fn_ptr = my_modulo;
        break;
    }
    return fn_ptr(left, right);
}

void perform_op(char** tokens, int size)
{
    int index = 0; 
    int prev_prev = 0;
    int prev = 0;
    int result = 0;
    while (index < size)
    {
        printf("working on token :%s\n", tokens[index]);
        if (is_operator(tokens[index]))
        {
            printf("copying result\n");
            result = my_calculate(tokens, index);
            tokens[index] = to_str(result, tokens[index]); 
            index = 0;
        }
        else
        {
            printf("copying previous token position\n");
            prev_prev = prev;
            prev = index;
            index += 1;
        }
        if (index == 0)
        {
            printf("Deleting previous tokens\n");
            delete_tokens(tokens, &size, prev);
            delete_tokens(tokens, &size, prev_prev);
        }
        print_result01(tokens, size);
    }
    printf("the int result is %i\n", result);
    printf("the char* result is %s\n", tokens[0]);
}