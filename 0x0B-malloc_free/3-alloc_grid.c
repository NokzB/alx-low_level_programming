#include <stdlib.h>
#include "main.h"

/**
* alloc_grid - returns a pointer to a 2 dimensional array
* @width: the width of the 2 dimensional array
* @height: the height of the 2 dimensional array
*
* Return: a pointer to an array of integers
*/

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int));
		if (grid == NULL)
		{
			free(grid);
			return (NULL);
		}
		for (i = 0; i < height; i++)
		{
			grid[i] = malloc(width * sizeof(int));
				if (grid[i] == NULL)
				{
					for (i--; i >= 0; i--)
					{
					free(grid[i]);
						free(grid);
						return (NULL);
					}
				}
		}
		for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)

		grid[i][j] = 0;

		return (grid);
}