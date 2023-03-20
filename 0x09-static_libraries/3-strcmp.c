#include "main.h"

/**
* _strcmp - compares two strings
* @s1: first string to be compared to
* @s2: second string to compare
*
* Return: 0 if equal or j if is different
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0' && j == 0)
	{
		j = s1[i] - s2[i];
		i++;
	}
	return (j);
}
