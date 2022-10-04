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

	i = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(*grid));
		if (grid == NULL)
		{
			free(grid);
			return (NULL);
		}
		while (i < height)
		{
			grid[i] = malloc(width * sizeof(**grid));
				if (grid[i] == NULL)
				{
					i--;
					while (i >= 0)
					{
						free(grid[i]);
						i--;
					}
					free(grid);
					return (NULL);
				}
				i++;
		}
		i = 0;
		return (grid);
}
