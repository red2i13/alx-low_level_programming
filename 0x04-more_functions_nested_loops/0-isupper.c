#include "main.h"

/**
 * _isupper - Entry point
 * @c: character in ascii
 *
 * Description: check if chracter is upper or lower
 * Return: 1 if uppercase, 0 if lowercase
 *
 */


int _isupper(int c)
{
	if (c > 65 && c < 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
