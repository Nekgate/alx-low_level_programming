#include "main.h"

/**
*free_grid - A program that frees 2d array
*@grid: 2d grid
*@height: height of grid
*Return: nothing
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
