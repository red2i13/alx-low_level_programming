#include "main.h"

/**
 * _strlen_recursion - Return the length of str
 * @s: string s
 * Return: the lentgh of str s
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}

/**
 * check_str - Check if is palidrome
 * @s: string
 * @len: length
 * @index: the name says
 * Return: 1 Or 0
 */

int check_str(char *s, int len, int index)
{
	if ((index == len) || (index == len - 3))
	{
		return (1);
	}
	else
	{
		if (s[len - 1] != s[index])
			return (0);
	}
	return (check_str(s, len - 1, index + 1));
}

/**
 * is_palindrome - is it palindrome
 * @s: string
 * Return: 1 Or 0
 */

int is_palindrome(char *s)
{
	if (s[0] == '\0')
		return (1);
	return (check_str(s, _strlen_recursion(s), 0));
}
