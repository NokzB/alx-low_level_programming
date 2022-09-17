#include "main.h"

/**
* print_most_numbers - a function tht prints most numbers from 0 to 9
*
* Return: 0-9, excluding 2 and 4
*/

void print_most_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		if ((a != '2') && (a != '4'))
		_putchar (a);
	}
	_putchar('\n');
}
