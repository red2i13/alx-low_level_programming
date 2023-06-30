#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Entry point
 *
 * Description: function that copy a string.
 * @dest: Recipient string
 * @src: Donor string
 * @n: bytes from src
 * Return: Returns a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
