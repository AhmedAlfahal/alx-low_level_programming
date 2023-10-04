#include "main.h"

/**
*	free_grid - free the grid
*
*	@grid: int **
*
*	@height: int
*
*	Return: nothing
*
**/

void	free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
		free(grid[i++]);
	free(grid);
}
