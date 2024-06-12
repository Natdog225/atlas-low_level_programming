#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Feel like this one is pretty self explanatory
 * @grid: same thing
 * @height: again pretty simple.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
