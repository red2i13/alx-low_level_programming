#include <stdio.h>

/**
 * jack_bauer -  function that prints every minute of the day
 */

void jack_bauer(void)
{
	int i, j;
	int tensDigit, onesDigit, tens, ones;

	for (i = 0; i < 24; i++)
	{

		for (j = 0; j < 60; j++)
		{
			tensDigit = i / 10;
			onesDigit = i % 10;

			putchar(tensDigit + '0');
			putchar(onesDigit + '0');
			putchar(':');
			tens = j / 10;
			ones = j % 10;

			putchar(tens + '0');
			putchar(ones + '0');
			putchar('\n');
		}
	}
}
