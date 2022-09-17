#include <stdio.h>

/**
* main - prints numbers from 1 to 100
* multiples of 3 print Fizz
* multiples of 5 print Buzz
* multiples of both 3 and 5 print FizzBuzz
* Return: Always 0 (success)
*/

int main(void)
{
	int i;

	for (i = 1; i != 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else if (i != 100)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
	}
	printf("\n");
	return (0);
}
