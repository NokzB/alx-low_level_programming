#include "main.h"
/**
* _strncat - concatenates two strings
* @dest: the destination of the concatenated string
* @src: the source of the concatenated string
* @n: an integer
* Return: destination
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;

	while (dest[i] != 0)
	{
		i++;
	}

	j - 0;

	while (src[j] != 0 && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
