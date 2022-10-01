#include "main.h"
/**
* reverse_array - reverses an array of integers
* @a: number of integers
* @n: length of array
*/

void reverse_array(int *a, int n)
{
	int j;
	int tmp;

	j = 0;
	n = n - 1;

	while (j < n)
	{
		tmp = a[j];
		a[j] = a[n];
		a[n] = tmp;
		j++;
		n--;
	}
}
