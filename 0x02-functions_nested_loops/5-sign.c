#include "main.h"

/**
 * print_sign - Entry point
 * @n: The number to be checked whether it's positive, negative or 0
 *
 * Return: 1 if number is positive, 0 if number is 0, -1 if number is negative
 */
int print_sign(int n)
{
	char plus = '+';
	char minus = '-';
	char zero = '0';

	if (n == 0)
	{
		_putchar(zero);
		return (0);
	}
	else if (n < 0)
	{
		_putchar(minus);
		return (-1);
	}
	else
		putchar(plus);
	return (1);
}
