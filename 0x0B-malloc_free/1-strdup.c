#include "main.h"
#include <stdlib.h>

/**
* _strdup - returns a pointer to a new string
* @str: the string
*
* Return: pointer to array of characters, NULL if insufficient memory
*/

char *_strdup(char *str)
{
	char *s;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)

		;

	s = malloc(sizeof(char) * (i + 1));

	if (s == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		s[j] = str[j];
		return (s);
}
