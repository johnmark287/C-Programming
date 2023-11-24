#include "shell.h"

void user_input(char *command, size_t size)
{
	// when user input is null
	if (fgets(command, size, stdin) == NULL)
	{
		//EOF conditions
		if (feof(stdin))
		{
			quan_printf("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			quan_printf("Error while reading input.\n");
			exit(EXIT_FAILURE);
		}
		// gets rid of the new line
		command[strspn(command, "\n")] = '\0';
	}
}
