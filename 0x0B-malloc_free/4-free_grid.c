#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free a 2d array
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	while (height >= 0)
	{
		free(grid[height]);
		height--;
	}
	free(grid);
}
