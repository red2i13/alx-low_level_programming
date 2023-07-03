#include "main.h"
#include <stddef.h>

/**
 *  _strchr - locates a character in a string
 *  @s: string to check
 *  @c: character to check for
 *
 *  Return: pointer to spot in s with c or null
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	char *str;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			str = &s[i];
			return (str);
		}
		i++;
	if (c == '\0')
		return (s);
	}
	return (NULL);

}
