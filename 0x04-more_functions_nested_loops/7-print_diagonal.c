#include "main.h"

/**
 * print_diagonal -  checks for checks for a digit (0 through 9).
 * @n: n -  Variable
 *
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
			{
				_putchar('\\');
				break;
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	if (n == 0)
	{
		_putchar('\n');
	}
	return (0);
}

