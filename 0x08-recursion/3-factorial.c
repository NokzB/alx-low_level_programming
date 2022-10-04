#include "main.h"

/**
* factorial - returns factorial of a given number
* @n: number input
* Return: -1 on error, 1 on success
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
