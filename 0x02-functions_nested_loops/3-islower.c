#include "main.h"

/**
 * _islower - Entry point
 * @c: The character to be checked whether it's a lowercase or not
 *
 * Return: (1) uppon Success and (0) in case of failure
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
