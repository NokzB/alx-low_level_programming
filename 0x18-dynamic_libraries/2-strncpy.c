#include "main.h"
/**
* _strncpy - copies a string to another
* @dest: the destination for the copied string
* @src: the source of the string to copy
* @n: an integer
* Return: destination
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
