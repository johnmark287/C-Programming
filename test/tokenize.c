#include "main.h"

int main(void)
{
	char command[] = "ls -l /home/usr";
	char *token, *delim = " ";

	token = strtok(command, delim);

	while (token)
	{
		printf("Token: %s\n", token);
		token = strtok(NULL, delim);
	}
	
	return (0);
}
