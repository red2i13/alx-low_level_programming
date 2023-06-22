#include "main.h"

#include "main.h"

/**
 * _isdigit - Checkes for a digit
 * @c: The character to be checked
 * Return: returns 1 if a digit is found
 * returns 0 if no digit is found
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
