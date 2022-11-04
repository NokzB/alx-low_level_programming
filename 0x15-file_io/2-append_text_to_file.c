#include "main.h"

/**
* append_text_to_file - function to append text to the end of a file
* @filename: name of file
* @text_content: null terminated string to add to the end of the file
* Return: 1 on success, -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int i, j, length = 0;

	if (filename == NULL)
		return (-1);

	i = open(filename, O_WRONLY | O_APPEND);
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
