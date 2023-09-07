#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: numbers of elements of the array
 * @size: bytes
 * Return: pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr_char;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr_char = malloc(nmemb * size);
	if (ptr_char == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		ptr_char[i] = 0;
	}
	return ((void *)ptr_char);
}
