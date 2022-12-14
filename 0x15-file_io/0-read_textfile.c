#include <stdlib.h>
#include "main.h"


/**
* read_textfile - function that reats a text file and
* prints it to the POSIX standard output
* @filename: the file to be read
* @letters: size of the characters in the file
* Return: actual number of letters that the function could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t i, j, k;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
		if (buf == NULL)
			return (0);

	i = open(filename, O_RDONLY);
	j = read(i, buf, letters);
	k = write(STDOUT_FILENO, buf, j);

	if (i == -1 || j == -1 || k == -1 || k != j)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(i);
	return (k);
}
