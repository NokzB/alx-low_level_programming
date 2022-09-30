#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - multiplies two numbers
* atoi is a function that converts a string into an integer
* @argc: arguments
* @argv: array of arguments in argc
* Return: Always 0 (successful)
*/

int main(int argc, char *argv[])
{

	int i, result = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			result *= atoi(argv[i]);
		}
		printf("%d\n", result);
	}
	return (0);
}

