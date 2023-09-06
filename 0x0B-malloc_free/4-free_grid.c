#include "main.h"
#include <stdlib.h>

/** 
 * free_grid - freeup memory
 * @grid: grid to empty up
 * @height: second dimension
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid != NULL && height >= 0)
	{
		while (i < height)
		{
			free(grid[i]);
			i++;
		}
		free(grid);
	}
}
