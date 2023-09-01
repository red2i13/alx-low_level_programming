#include "main.h"

/**
 * skip - skip a charcter
 * @s: string
 * @index: index
 * Return: index
 */

int skip(char *s, int index)
{
	if (s[index] != '*' && s[index] != '\0')
		return (index);
	else if (s[index] == '\0')
		return (index);
	return (skip(s, index + 1));
}

/**
 * inspire - compare 2 str
 * @s1: string 1
 * @s2: string 2
 * @ind: index for string 1
 * @ind1: index for string 2
 * Return: 0 or 1
 */

int inspire(char *s1, char *s2, int ind, int ind1)
{
	if (s1[ind] == s2[ind1])
	{
		if (s2[ind1] == '\0')
			return (1);
		return (inspire(s1, s2, ind + 1, ind1 + 1));

	}
	if (s2[ind1 - 1] == '*')
	{
		if (s1[ind] == s2[ind1])
			return (inspire(s1, s2, ind + 1, ind1 + 1));
		else
			return (inspire(s1, s2, ind + 1, ind1));
	}
	if (s2[ind1] == '*')
	{
		return (inspire(s1, s2, ind, skip(s2, ind1)));
	}
	return (0);
}

/**
 * wildcmp - call for inspire
 * @s1: string 1
 * @s2: string 2
 * Return: 0 or 1
 */
int wildcmp(char *s1, char *s2)
{
	return (inspire(s1, s2, 0, 0));
}
