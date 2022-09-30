#include <stdio.h>
#include "main.h"

/**
* main - prints all arguments it receives
* @argc: arguments
* @argv: array for arguments in argc
* Return: always 0 (successful)
*/

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
