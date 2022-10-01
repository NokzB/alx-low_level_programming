#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - prints number of coins to make change for an amount of money
* @argc: arguments to be passed
* @argv: array of arguments
* Return: 0 on success
*/

int main(int argc, char **argv)
{
	int amount, change;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	change = atoi(argv[1]);

	for (amount = 0; change > 0; amount++)
	{
		if (change - 25 >= 0)
		{
			change = change - 25;
		}
		else if (change - 10 >= 0)
		{
			change = change - 10;
		}
		else if (change - 5 >= 0)
		{
			change = change - 5;
		}
		else if (change - 2 >= 0)
		{
			change = change - 2;
		}
		else if (change - 1 >= 0)
		{
			change = change - 1;
		}
}
	printf("%d\n", amount);
	return (0);
}
