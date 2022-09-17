#include "main.h"

/**
* print_triangle - prints a triangle
* @size: the value for the triangle
*/

void print_triangle(int size)
{
	int a;
	int b;

	if (size <= 0)
		_putchar(10);

	for (a = size; a > 0; a--)
	{
		for (b = 1; b <= size; b++)
			if (b >= a)
				_putchar(35);
			else
				_putchar(32);
		_putchar('\n');
	}
}
