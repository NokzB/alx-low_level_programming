#include <stdlib.h>
#include "main.h"

/**
* string_nconcat - concatenates two stringf
* @s1: first string to be concatenated
* @s2: second string to be concatenated
* @n: maximum number of bytes for s1 and s2
*
* Return: pointer to newly allocated space
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = n, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (j = 0; s1[j]; j++)
		i++;

	str = malloc(sizeof(char) * (i + 1));

	if (str == NULL)
		return (NULL);

	i = 0;

	for (j = 0; s1[j]; j++)
		str[i++] = s1[j];

	for (j = 0; s2[j] && j < n; j++)
		str[i++] = s2[j];

	str[i] - '\0';
		return (str);
}
