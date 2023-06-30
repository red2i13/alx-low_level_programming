#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Entry point
 *
 * Description: function that copy a strings.
 * @dest: Recipient string
 * @src: Donor string
 * @n: bytes from src
 * Return: Returns a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, len = 0, z = 0;
	int j = 0;
	char tmp;

	while (dest[i] != '\0')
	{
		len++;
		i++;
	}

	while (src[z] != src[n])
	{
		tmp = src[z];
		dest[j] = tmp;
		z++;
		j++;
	}

	return (dest);
}
