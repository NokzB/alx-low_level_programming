#include "main.h"
/**
* _memcpy - copies memory area
* @dest: destination of copied string
* @src: source of string to be copied
* @n: number of byts to copy
* Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
