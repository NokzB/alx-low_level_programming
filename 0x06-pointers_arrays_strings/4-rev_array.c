#include "main.h"
/**
* reverse_array - reverses an array of integers
* @a: number of integers
* @n: length of array
*/

void reverse_array(int *a, int n)
{
	int j, k, tmp;

	j = 0;
	k = j - 1;

	while (j < k)
	{
		tmp = a[j];
		a[j] = a[k];
		a[k] = tmp;
		j++;
		k--;
	}
}
