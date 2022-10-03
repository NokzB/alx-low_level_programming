#include "main.h"
#include <stdio.h>
/**
* print_diagsums - prints the sum of two diagonals in a square matrix
* @a: pointer to beginning of matrix
* @size: the width of the matrix
* Return: void
*/

void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	i = 0;
	sum1 = 0;
	sum2 = 0;
	j = 1;

	while (i < size)
	{
		sum1 = sum1 + a[(size + 1) * i];
		sum2 = sum2 + a[(size - 1) * j];
		i++;
		j++;
	}
	printf("%d, %d\n", sum1, sum2);
}
