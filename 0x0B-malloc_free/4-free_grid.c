#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * free_grid - Frees a 2-dimensional grid
 * @grid: Pointer to the grid to be freed
 * @height: The number of rows in the grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
