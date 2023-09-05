#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  pointer to a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 * Return:  grid is initialized with 0
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i  = 0;
	int j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = (int **)malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	while (i < height)
	{
		ptr[i] = (int *)malloc(sizeof(int *) * width);
		i++;
	}
	i = 0;
	while (i < height)
	{
		while (j < width)
		{
			ptr[i][j] = 0;
			j++;
		}
		j = 0;
		i++;
	}
	return (ptr);
}
