#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Entry point
 * Description: Compare two strings
 *
 *@s1: first string
 *
 *@s2: second string
 * Return: difference of the ascii representation of the two character
 *
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, len = 0, j = 0;

	while (s1[j] != '\0')
	{
		len++;
		j++;
	}
	for (; i < len; i++)
	{
		if (s1[i] == s2[i])
		{
			continue;
		}
		else
		{
			return ((int)s1[i] - (int)s2[i]);
		}

	}
	return (0);
}
