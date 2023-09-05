#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Entry point
 *
 * Description: returns the length of a string
 *
 * @s: string of characters
 *
 * Return: Always n
 */

int _strlen(char *s)
{
	int n;

	if (s == NULL)
		return (0);
	for (n = 0; *s != '\0'; s++)
	{
		n++;
	}
	return (n);
}

/**
 * str_concat - concate two strings
 * @s1: first string
 * @s2: secind string
 * Return: return pointer to the concancated string
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, lent = 0;
	int i = 0;
	char *ptr;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	lent = len1 + len2;

	ptr = malloc(sizeof(char) * (lent + 1));
	if (ptr == NULL)
		return (NULL);
	while (i < lent)
	{
		if (i < len1)
			ptr[i] = s1[i];
		else if (i >= len1)
			ptr[i] = s2[i - len1];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);

}

