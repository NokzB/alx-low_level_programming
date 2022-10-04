#include "main.h"

/**
* _pow_recursion - returns the value of x raised to the power y
* @x: input number
* @y: power number
* Return: 1 on success, on error, -1 is returned
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
