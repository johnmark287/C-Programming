#include "main.h"

int main(void)
{
	int _pid1, _pid2;
	pid_t _pid3;

	_pid1 = getpid();
	_pid2 = getpid();
	_pid3 = getppid();
	printf("%d\n", _pid1);
	printf("%d\n", _pid2);
	printf("%u\n", _pid3);
	return (0);
}
