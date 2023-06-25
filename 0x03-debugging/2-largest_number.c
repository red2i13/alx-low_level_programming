#include "main.h"

/**
 * largest_number - function that returns the largest int of 3
 * @a: first int
 * @b: second int
 * @c: third int
 *
 * Return: returns the largest int of the 3 ints
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if ((a >= b && b >= c) || (a >= b && c >= b))
	{
		largest = a;
	}
	else if ((b >= a && a >= c) || (b >= a && c >= a))
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
