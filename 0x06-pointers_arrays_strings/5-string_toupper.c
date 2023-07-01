#include "main.h"

/**
 * string_toupper - Change all lowercase letters to uppercase
 * @s: string
 * Return: c
 */
char *string_toupper(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		if (s[i] < 123 && s[i] > 96)
		{
			s[i] -= 32;
		}
	}
	return (s);
}
