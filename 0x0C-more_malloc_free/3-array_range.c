#include <stdlib.h>
#include "main.h"

/**
* array_range - creates an array of integers
* @min: the minimum number of integers
* @max: the maximum number of integers
*
* Return: an array
*/

int *array_range(int min, int max)
{
	int *s, i, j;

	if (min > max)
		return ('\0');

	j = (max - min) + 1;

	s = malloc(sizeof(int) * j);

	if (s == NULL)
		return ('\0');

	for (i = 0; i < j; i++)
		s[i] = min + i;

	return (s);
}
