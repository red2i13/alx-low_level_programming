#include "main.h"

/**
 * _pow_recursion - calculate the number power
 * @x: the number
 * @y: the power
 * Return: the value of x raised to power.
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (-1);
}
