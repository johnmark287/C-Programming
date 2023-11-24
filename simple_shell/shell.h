#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <errno.h>

void display_prompt(void);
void quan_printf(const char *message);
void user_input(char *command, size_t size);
void execute_command(const char *command);

#endif /* SHELL_H */