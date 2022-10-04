#include "main.h"

/**
* _strlen_recursion - returns a length of a string
* @s: string
* Return: always 0 (successful)
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
