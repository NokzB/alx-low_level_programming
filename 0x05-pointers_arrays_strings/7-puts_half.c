#include "main.h"
/**
* puts_half - prints the second half of a string
* @str: the string
*/

void puts_half(char *str)
{
	int i, n, length;
	{
		for (length = 0; str[length] != '\0'; length++)
		{
		}
	n = (length - 1) / 2;
		for (i = n - 1; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	_putchar('\n');
	}
}
