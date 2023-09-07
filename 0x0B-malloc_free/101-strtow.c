#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _memcpy - replace src to dest with an n limiter of bytes
 * @dest: the address of memory to print
 * @src: the byte to write
 * @start: start of the word
 * @n: the number of spaces to write
 * Return: Returns value in dest
 */

void _memcpy(char *dest, char *src, int start,  int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i + start];
	}
	dest[i] = '\0';
}

/**
 * _strlen - Entry point
 *
 * Description: returns the length of a string
 *
 * @str: string of characters
 *
 * Return: Always n
 */

int _strlen(char *str)
{
	int i = 0;
	int words = 0;

	if (str[i] == ' ')
	{
		while (str[i] != '\0' && str[i] == ' ')
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] == ' ' && (str[i + 1] >= 33 && str[i + 1] <= 126))
			words++;
		i++;
	}
	return (words);
}

/**
 * strtow - split string into words
 * @str: string to split
 * Return: pointer to words
 */

char **strtow(char *str)
{
	int i = 0, j = 0, len = 0, start, words;
	char **ptr;

	words = _strlen(str);
	words += 2;
	ptr = malloc(sizeof(char *) * words);
	if (ptr == NULL || str == NULL || !(_strlen(str)))
	{
		free(ptr);
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0' && j <= words - 2)
	{
		if (str[i] != ' ')
		{
			start = i;
			while (str[i] != ' ' && str[i] != '\0')
			{
				len++;
				i++;
			}
			ptr[j] = (char *)malloc(sizeof(char) * (len + 1));
			if (ptr[j] == NULL)
			{
				while (j >= 0)
				{
					free(ptr[j]);
					j--;
				}
				return (NULL);
			}
			_memcpy(ptr[j], str, start,  len);
			j++;
		}
		len = 0;
		i++;
	}
	ptr[j] = NULL;
	return (ptr);
}
