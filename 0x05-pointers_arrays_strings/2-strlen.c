#include "main.h"
/**
* _strlen - returns the length of a string
* @s: variable defining a string
* Return: returns length
*/

int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
