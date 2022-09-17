#include "main.h"
#include <stdio.h>

/**
* main - prints numbers from 1 to 100
* multiples of 3 print Fizz
* multiples of 5 print Buzz
* multiples of 3 and 5 print FizzBuzz
* Return: Always 0 (success)
*/

int main(void)
{
	int i;

	for (i = 1; i <= 99; i++)
	{

		if (i % 3 == 0 && i % 5 != 0)
			printf("Fizz ");
		else if (i % 5 == 0 && i % 3 != 0)
			printf("Buzz ");
		else if (i % 5 == 0 && i % 3 == 0)
			printf("FizzBuzz ");
		else
			printf("%i", i);
	}
	printf("Buzz");
	printf("\n");
}
