#include "main.h"

/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * @n: Starting point
 */

void print_to_98(int n)
{
	int lp;
	int tensDigit, onesDigit;

	if (n > 0)
	{
		lp = 98 - n;

		for (; lp >= 0; lp--)
		{
			tensDigit = n / 10;
			onesDigit = n % 10;

			_putchar(tensDigit + '0');
			_putchar(onesDigit + '0');
			_putchar(',');
			_putchar(' ');
			n++;
		}
	}

	else

	{
		n = -n;
		lp = 98 + n;

		for (; lp >= 0; lp--)
		{
			tensDigit = n / 10;
			onesDigit = n % 10;

			_putchar(tensDigit + '0');
			_putchar(onesDigit + '0');
			_putchar(',');
			_putchar(' ');
			n++;
		}
	}
}

