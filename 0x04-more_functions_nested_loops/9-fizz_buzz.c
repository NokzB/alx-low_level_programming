#include <stdio.h>

/**
* main - prints numbers from 1 to 100
* prints FizzBuzz with multiples of 3 and 5
* prints Fiss with multiples of 3
* prints buzz with multiples of 5
* Return: Always 0 (success)
*/

int main(void)
{
	int i;

	for (i >= 1; i = 100; i++)
	{

		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz ");
		}
		else if (i % 15 == 0)
		{
			printf("%d", i);
		}
	}
	printf("\n");
	return (0);
}
