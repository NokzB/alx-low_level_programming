#include <stdlib.h>
#include "main.h"

/**
* str_concat - concatenates two strings
* @s1: first string
* @s2: second string
*
* Return: a pointer to an array of characters, NULL if failed
*/

char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s2[i] != '\0'; i++)
		;

	s = malloc(sizeof(char) * (i + j + 1));
		if (s == NULL)
		{
			free(s);
			return (NULL);
		}

		for (k = 0; k < i; k++)
			s[k] = s1[k];
		l = j;

		for (j = 0; j <= i; k++, j++)
			s[k] = s2[j];
	return (s);
}
