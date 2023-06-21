#include "main.h"

/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * @n: Starting point
 */

void print_to_98(int n)
{
	if (n > 0)
	{
		int lp = 98 - n;
		int tensDigit, onesDigit;

		for (; lp >= 0; lp--)
		{
			tensDigit = n / 10;
			onesDigit = n % 10;

			putchar(tensDigit + '0');
			putchar(onesDigit + '0');
			putchar('\n');
			n++;
		}
	}

	else

	{
		n = -n;
		int lp = 98 + n;
		int tensDigit, onesDigit;

		for (; lp >= 0; lp--)
		{
			tensDigit = n / 10;
			onesDigit = n % 10;

			putchar(tensDigit + '0');
			putchar(onesDigit + '0');
			putchar('\n');
			n++;
		}
	}
}

