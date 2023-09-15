#include "function_pointers.h"

/**
 * int_index -  function that searches for an integer.
 * @array: array containg integers
 * @size: size of the array
 * @cmp: poitner to function for search
 * Return: -1 if fails or index if it pass
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
