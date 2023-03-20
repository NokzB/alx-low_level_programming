#include "main.h"
/**
* _strcpy - copies a striing into a buffer
* @dest: the destionation fo the copied string
* @src: the source of the string to copy
* Return: destination
*/

char *_strcpy(char *dest, char *src)
{
	int i, len;

	for (len = 0; src[len] != '\0'; len++)
	{
	}
	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
