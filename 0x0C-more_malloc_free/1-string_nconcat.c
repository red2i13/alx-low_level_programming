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

unsigned int _strlen(char *s)
{
	unsigned int n;

	if (s == NULL)
		return (0);
	for (n = 0; *s != '\0'; s++)
	{
		n++;
	}
	return (n);
}

/**
 * string_nconcat - concate two strings
 * @s1: first string
 * @s2: second string
 * @n: n bytes to copy from string s2
 * Return: return pointer to the concancated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, lent = 0;
	unsigned int i = 0;
	char *ptr;

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n > len2)
		n = len2;
	lent = len1 + n;
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

