#include "main.h"

/**
* evaluate - function to eevaluate numbers
* @a: input number
* @b: input number
* Return: 0 or 1
*/

int evaluate(int a, int b)
{
	if (a == b - 1)
	{
		return (1);
	}

	else if (a % b == 0)
	{
		return (0);
	}

	else if (a % b != 0)
	{
		return (evaluate(a, b + 1));
	}
	else
		return (0);
}

/**
* is_prime_number - checks if numebr is a prime number
* @n: input number
* Return: 1 if prime number, 0 if not
*/

int is_prime_number(int n)
{
	int b;

	b = 2;

	if (n < 2)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
		return (evaluate(n, b));
}
