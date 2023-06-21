#include "main.h"

/**
 * _isalpha - Entry point
 * @c: The character to check whether it's an alphabet or not
 *
 * Return: 1 uppon Success, and 0 in case of failure
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
