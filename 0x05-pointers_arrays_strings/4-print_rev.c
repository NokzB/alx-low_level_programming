#include "main.h"
/**
* print_rev - prints a string in reverse
* @s: represents the string
*/

void print_rev(char *s)
{
	int i = 0;
	int length;

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
