#include "main.h"

/**
* create_file - a function that creates a file
* @filename: the name of the file to create
* @text_content: the null terminated string to write to the file
* Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int i, j, length = 0;

	if (filename == NULL)
		return (-1);

	i = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (i < 0)
		return (-1);


	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
		j = write(i, text_content, length);
		if (j != length)
			return (-1);
	}

	close(i);

	return (1);
}
