#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* error_file - checks if files can be opened
* @file_from:  file to be copied from
* @file_to: file to be copied to
* @argv: array of arguments
* Return: no return
*/

void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
* main - copies the contents from a file to another file
* @argc: number of arguments passed to the program
* @argv: array of arguments
* Return: 0 (success)
*/
int main(int argc, char *argv[])
{
	int f_f, f_t, err_close;
	ssize_t nchars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	f_f = open(argv[1], O_RDONLY);
	f_t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	error_file(f_f, f_t, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(f_f, buf, 1024);
		if (nchars == -1)
			error_file(-1, 0, argv);
		nwr = write(f_t, buf, nchars);
		if (nwr == -1)
			error_file(0, -1, argv);
	}

	err_close = close(f_f);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_f);
		exit(100);
	}
	err_close = close(f_t);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_t);
		exit(100);
	}
	return (0);
}
