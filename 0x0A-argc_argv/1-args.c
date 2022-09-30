#include <stdio.h>
#include "main.h"

/**
* main - prints the number of arguments passed to it
* @argc: arguments
* @argv: array of arguments
* Return: Always 0 (successful)
*/

int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
