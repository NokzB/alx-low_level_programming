#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - copies the  of contents from a file to another file
* @argv: number of arguments passed to the program
* @argc: array of arguments
* Return: 0 (success)
*/
int main(int argv, char *argc[])
{
	int f_f, f_t, k, i, j;
	char *buf[BUFSIZ];

	if (argv != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	f_f = open(argc[1], O_RDONLY);
	if (f_f < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argc[1]);
		exit(98);
	}
	f_t = open(argc[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((k = read(f_f, buf, BUFSIZ)) > 0)
	{
		if (f_t < 0 || write(f_t, buf, k) != k)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argc[2]);
			exit(99);
		}
	}

	if (k < 0);
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argc[1]);
		exit(98);
	}
	i = close(f_f);
	j = close(f_t);
	if (i < 0 || j < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_f);
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_t);
		exit(100);
	}
	return (0);
}
