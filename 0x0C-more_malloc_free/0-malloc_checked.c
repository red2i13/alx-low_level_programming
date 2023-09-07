#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: numbers of byte to alocate
 * Return: adrress of allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = (void *)malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
