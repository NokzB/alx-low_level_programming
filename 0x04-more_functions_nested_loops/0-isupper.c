#include "main.h"

/**
* _isupper - a function that checks if c is an uppercase letter
* @c: input
* Return: 1 if c is uppercase, otherwise 0
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
