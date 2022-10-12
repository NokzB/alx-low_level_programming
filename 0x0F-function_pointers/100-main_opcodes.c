#include <stdio.h>
#include <stdlib.h>

/**
* main - prints its own opcodes
* @argc: number of arguments
* @argv: array
* Return: 0 (successful)
*/

int main(int argc, char *argv[])
{
	int a, b;
	char *c;
	int (*func)(int, int);

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	a = atoi(argv[1]);
	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}
	c = (char *)main;
	for (b = 0; b < a; b++)
	{
		if (b == a - 1)
		{
			printf("%02hhx\n", c[b]);
			break;
		}
		printf("%02hhx ", c[b]);
	}
	return (0);
}
