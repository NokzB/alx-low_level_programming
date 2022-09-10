#include <stdio.h>
/**
* main - prints single digits of base 10 from 0
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);

	putchar('\n');
	return (0);
}
