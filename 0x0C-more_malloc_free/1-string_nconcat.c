#include "main.h"
#include <stdlib.h>
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
	unsigned int i = 0, j = 0, k;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	while (s1[i] != '\0')
	{
		i++;
	}

	while (s2[j] != '\0')
	{
		j++;
	}

	if (n > j)
	n = j;

	str = malloc((i + n + 1) * sizeof(char));
	if (str == NULL)
		return (0);

	for (k = 0; k < i; k++)
	{
		str[k] = s1[k];
	}
	for (; k < (i + n); k++)
	{
		str[k] = s2[k - i];
	}
	str[k] = '\0';
	return (str);
}
