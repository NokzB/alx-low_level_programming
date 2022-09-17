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
	int i = 1;

	while (i <= 100)
	{

		if ((i % 3 == 0 && i % 5 == 0))
			printf("FizzBuzz ");
		else if (i % 5 == 0)
		{
			if (i == 100)
			{
				printf("Buzz ");
				printf("\n");
			}
			else
				printf("Buzz ");
		}
		else if (i % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", i);
	i++
	}
	return (0);
}