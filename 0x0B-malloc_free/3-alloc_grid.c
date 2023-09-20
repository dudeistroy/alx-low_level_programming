#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Allocates a 2D grid of integers
 * @width: The width (number of columns) of the grid
 * @height: The height (number of rows) of the grid
 *
 * Description: This function allocates memory for a 2D grid with the specified
 * width and height. Each element of the grid is initialized to 0
 *
 * Return: A pointer to the allocated grid, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
