#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: the destination of the concatenated string
* @src: the source of the string to be concatenated
* Return: destination
*/

char *_strcat(char *dest, char *src)
{
	int length, i;
	length = 0;

	while (dest[length] != '\0')
	{
		++length;
	}
	for (i = 0; src[i] != '\0'; ++i, ++length)
	{
		dest[length] = src[i];
	}
	dest[length] = '\0';
	return (dest);
}
