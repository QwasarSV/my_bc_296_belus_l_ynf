#ifndef __MY_RPN_HEADER_
#define __MY_RPN_HEADER_

#include <main_header.h>

bool    is_operator(char* token);

int     my_add(int left, int right);
int     my_substract(int left, int right);
int     my_mult(int left, int right);
int     my_divide(int left, int right);
int     my_modulo(int left, int right);

int     my_calculate(char** tokens, int pos);
void    perform_op(char** tokens, int size);
int     to_int(char* token);
char*   to_str(int val, char* buff);
void    delete_tokens(char **tokens, int *size, int pos);
int     count_digits(int val);
int     free_result(char**tokens);

#endif