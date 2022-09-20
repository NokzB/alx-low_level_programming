#include "main.h"
/**
* print_rev - prints a string in reverse
* @s: represents the string
*/

void print_rev(char *s)
{
	int i = 0;
	int length;

	while (s[length++])
	i++;

	for (length = i - 1; length >= 0; length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
