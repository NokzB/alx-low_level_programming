#include "main.h"
/**
* _strchr - locates a character in a string
* @s: the string
* @c: the character to be located
* Return: pointer to first spot in the string with c, or null
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
