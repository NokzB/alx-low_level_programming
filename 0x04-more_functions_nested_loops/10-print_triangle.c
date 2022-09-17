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
	{

		for (a = size; a > 0; a--)
		{
			for (b = 1; b <= size; b++)
				_putchar ('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
