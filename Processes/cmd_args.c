#include "main.h"

int main(char *av[])
{
	int i, j;
	char **argv;

	for (i = 0; *av; i++)
	{
		for (j = 0; av[i]; j++)
			argv[i][j] = *(*(argv + i) + j);
	}
	printf("%s", *av[i]);
	return (0);
}
