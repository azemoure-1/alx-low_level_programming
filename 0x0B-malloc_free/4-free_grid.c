#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid previously
 * @grid: pointer to the grid to be freed
 * @height: height of the grid
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

