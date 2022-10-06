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
	unsigned int i = 0, j = 0, k = 0, l = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;
	while (s2[k])
		k++;

	if (n >= k)
		l = l + k;
	else
		l = i + n;

	str = malloc(sizeof(char) * i + 1);

	if (str == NULL)
		return (NULL);

	k = 0;

	while (j < l)
	{
		if (j <= i)
			str[j] = s1[j];

		if (j >= i)
			str[j] = s2[k];
	}
	j++;
	str[j] = '\0';
	return (str);
}
