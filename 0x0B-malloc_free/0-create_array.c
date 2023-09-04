#include "main.h"
#include <stdlib.h>

/**
 * create_array - dynamic alloc concept
 * @size: size of array
 * @c: char to initialize
 * Return: poiter to the array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	ptr = malloc(sizeof(char) * size);
	if (size == 0 || ptr == NULL)
	{
		return (NULL);
	}
	ptr[0] = '\0';
	i += 1;
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
