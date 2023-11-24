#include "main.h"

char _strtok(char *str, char *delim)
{
	// char *ptr;
	char *token, buffer[strlen(str)];
	int i;

	for (i = 0; str[i]; i++)
		buffer[i] = str[i];

	for (i = 0; i < strlen(str); i++)
	{
		token[i] = buffer[i];
		if (str[i] == *delim)
		{
			// ptr = token[i + 1];
			return (token);
		}
	}
	return (token);
}

int main(void)
{
	char *str = "hello world johnmark";
	// char token[strlen(str)],  *delim = " ";
	char *result, *delim;
	int i;

	delim = " ";
	result = _strtok(str, delim);
	printf("%s", result);
	return 0;
}
	
	// for (i = 0; str[i]; i++)
	// {
	// 	token[i] = str[i];
	// 	// if (str[i] == delim[0])
	// 	// {
	// 	// 	// ptr = token[i + 1];
	// 	// 	// return (token);
	// 	// }
	// }
	// for (int i = 0; token[i]; i++)
	// 	printf("%c", token[i]);
	// printf("***********\n");

	// result = _strtok(str, " ");