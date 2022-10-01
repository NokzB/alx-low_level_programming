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
	int length, i;

	i = 0;

	while (dest[length] != 0)
	{
		length++;
	}
	while (src[i] != 0 && i < n)
	{
		dest[length] = src[i];
		i++;
		length++;
	}
	return (dest);
}
