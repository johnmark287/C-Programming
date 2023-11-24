#include "shell.h"

void execute_command(const char *command)
{
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		quan_printf("Error forking process.\n");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		// child process
		// parse the command and its args
		char *args[128], *token;
		int argc = 0;

		token = strtok((char *)command, " ");
		while (token)
		{
			args[argc++] = token;
			token = strtok(NULL, " ");
		}
		args[argc] = NULL; // nul terminated

		// execute command
		execvp(args[0], args);
		// execlp(command, command, (char *)NULL);
		// perror("execlp");
		quan_printf("Child process.\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		// parent process
		wait(NULL);
	}
}
