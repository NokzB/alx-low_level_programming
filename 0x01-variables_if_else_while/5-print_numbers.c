#include <stdio.h>
/**
* main - prints numbers of base 10 from 0
*
* Return: Always 0 (successful)
*/
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
		putchar (n);

	putchar ('\n');
	return (0);
}
