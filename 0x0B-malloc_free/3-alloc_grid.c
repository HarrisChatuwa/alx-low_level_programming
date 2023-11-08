#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * @width: width
 * @height: height
 * Return: NULL on failure, pointer on succ and NULL if q and h 0
 */

int **alloc_grid(int width, int height)
{
	int **grid, i, h, w;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int));

	if (grid == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(width * sizeof(int));

		if (grid[h] == NULL)
		{
			for (i = 0; i < h; i++)
				free(grid[i]);

			free(grid);
			return (NULL);
		}

		for (w = 0; w < width; w++)
			grid[h][w] = 0;
	}

	return (grid);
}
