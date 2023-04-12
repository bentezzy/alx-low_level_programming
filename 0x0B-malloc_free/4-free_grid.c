#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - main function
 * @grid: par 1
 * @height: par 2
 *
 * Return: grid
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

