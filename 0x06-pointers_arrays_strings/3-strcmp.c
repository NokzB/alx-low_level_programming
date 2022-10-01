#include "main.h"

/**
* _strcmp - compares two strings
* @s1: first string to be compared to
* @s2: second string to compare
* Return: 0 if strings are the same, n0 if the are not
*/

int _strcmp(char *s1, char *s2)
{
	int i;
	int j;

	while (s1[i] != '\0' && j == 0)
	{
		j = s1[i] - s2[j];
		i++;
	}
	return (j);
}
