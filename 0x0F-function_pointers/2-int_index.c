#include "function_pointers.h"

/**
* int_index - searches for an integer
* @array: array
* @size: size of the array
* @cmp: pointer to the function
* Return: index of the first element which matches cmp or -1 if none found
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int b;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (b = 0; b < size; b++)
	{
		if (cmp(array[b]))
			return (b);
	}
	return (-1);
}
