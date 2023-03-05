#include <main_header.h>

int welcome_error(int val)
{
    if (val > ARG_SIZE || val == 1)
    {
        write(STDERR_FILENO, ERR_MSG_MAX_SIZE, my_strlen(ERR_MSG_MAX_SIZE));
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}