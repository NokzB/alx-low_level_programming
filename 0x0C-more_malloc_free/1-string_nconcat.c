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
	unsigned int i = 0, j = 0, k = 0, m, p, len;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;
	while (s2[j])
		j++;

	if (j < n)
		j = n;
	len = i + j;

	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);

	for (p = 0; p < i; p++)
		str[k++] = s1[p];

	for (m = 0; m < j; m++)
		str[k++] = s2[m];

	str[j] = '\0';
	return (str);
}
