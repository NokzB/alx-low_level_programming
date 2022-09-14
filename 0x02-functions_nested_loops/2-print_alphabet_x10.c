#include "main.h"
/**
* print_alphabet_x10 - prints alphabets 10 times
*
* Return: always 0
*/

void print_alphabet_x10(void)
{
	char n;
	int a = 0;

	while (a < 10)
	{
		n = 'a';
		while (n <= 'z')
		{
			_putchar(n);
			n++;
		}
		_putchar('\n');
	}
}
