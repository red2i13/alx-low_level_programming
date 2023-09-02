#include <stdio.h>

/**
 * _strcpy - copy string form src to destination
 * @src: source string
 * @dest: destination string
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i]
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
