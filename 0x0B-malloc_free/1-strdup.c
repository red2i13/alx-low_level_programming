#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copy of the string given as a parameter
 * @str: string to copy
 * Return:  newly allocated space in memory
 */

char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *ptr;

	while (str[i] != '\0')
	{
		if (str == NULL)
			return (NULL);
		i++;
	}
	ptr = malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (j < i)
	{
		ptr[j] = str[j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
