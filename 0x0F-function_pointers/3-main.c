#include "3-calc.h"

/**
* main - entry point
* @argc: number of arguments
* @argv: string of arguments in array
* Return: 0 (success)
*/

int main(int argc, char *argv[])
{
	int arg, arg2, k;
	char o;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	func = get_op_func(argv[2]);
	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	o = *argv[2];

	if ((o == '/' || o == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	k = func(arg, arg2);
	printf("%d\n", k);
	return (0);
}
