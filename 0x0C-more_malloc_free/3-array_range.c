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
	int *str, i = 0, m = min;

	if (min > max)
		return (NULL);

	str = malloc((max - min + 1) * sizeof(int));

	if (!str)
		return (0);

	while (i <= max - min)
		str[i++] + m++;

	return (str);
}
