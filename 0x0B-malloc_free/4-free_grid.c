#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2D array grid previously created by alloc_grid
 * @grid: 2D grid
 * @height: height of 2D array
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	i = 0;
	while (i < height)
	{
		for (; grid[i]; i++)
		{
			free(grid[i]);
			return;
		}
	}
	free(grid);
}
