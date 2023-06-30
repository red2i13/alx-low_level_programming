#include "main.h"
#include <stdio.h>

/**
 * _strcat - Entry point
 *
 * Description: function that concatenates two strings.
 * @dest: Recipient string
 * @src: Donor string
 *
 * Return: Returns a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, len = 0, z = 0;
	int j;
	char tmp;

	while (dest[i] != '\0')
	{
		len++;
		i++;
	}
	j = len;
	while (src[z] != '\0')
	{
		tmp = src[z];
		dest[j] = tmp;
		z++;
		j++;
	}
	dest[j] = '\0';

	return (dest);
}
