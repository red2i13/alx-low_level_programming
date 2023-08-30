#include <stdio.h>

/**
 * _strchr -  function that gets the length of a prefix substring.
 * @letter: letter
 * @s: word
 * Return: True or False
 */

int _strchr(char letter, char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == letter)
			return (1);
		i++;
	}
	return (0);
}
/**
 * _strspn -  function that gets the length of a prefix substring.
 * @s: string
 * @accept: string to search
 * Return: length of prfix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (!(_strchr(s[i], accept)))
			break;
		i++;
	}
	return (i);
}
