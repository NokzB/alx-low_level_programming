#include "main.h"
/**
* print_alphabet - prints alphabet 
*
* Return: 0 (success)
*/
void print_alphabet(void)
{	
	char n;

	for (n = 'a', n <= 'z', n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
