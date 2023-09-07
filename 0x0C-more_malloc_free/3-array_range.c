#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: min integer
 * @max: max integer
 * Return: the array of intgers
 *
 */

int *array_range(int min, int max)
{
	int i = 0;
	int *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	while (i <= max - min)
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}
