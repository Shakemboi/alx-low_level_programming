#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid -  function that frees a 2 dimensional
 * @grid: 2 dimensional grid
 * @height: height dimension of grid
 *  Description: it frees memory of the grid
 *  Return: nothing to be returned
 */
void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
	{
		free(grid[h]);
	}
	free(grid);
}
