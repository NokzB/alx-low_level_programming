#include "main.h"

/**
* _evaluate - evaluate function sqrt
* @i: first integer
* @n: second integer
* Return: evaluated sqrt
*/

int _evaluate(int i, int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else if (i * i < n)
	{
		return (_evaluate(i + 1, n));
	}
	else if (i * i == n)
	{
		return (i);
	}
}
/**
* _sqrt_recursion - returns the natural square root of a number
* @n: number input
* Return: -1 if not a natural square root, 1 on success
*/

int _sqrt_recursion(int n)
{
	int i = 0;

	if (i < 0)
	{
		return (-1);
	}

	else
		return (_evaluate(i, n));

}
