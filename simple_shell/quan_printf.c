// prints to stdout.
#include "shell.h"

void quan_printf(const char *message)
{
    write(STDOUT_FILENO, message, strlen(message));
}
