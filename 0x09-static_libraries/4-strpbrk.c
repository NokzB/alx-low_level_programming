#include "main.h"

/**
* _strpbrk - searches a string for any set of bytes
* @s: source string
* @accept: string to be checked
* Return: pointer to s if a match, null is none is found
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return ('\0');
}
