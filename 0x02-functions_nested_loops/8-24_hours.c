#include <stdio.h>

/**
 * jack_bauer -  function that prints every minute of the day
 */

void jack_bauer(void)
{
	for (int i = 0; i < 24; i++)
	{

		for (int j = 0; j < 60; j++)
		{
			int tensDigit = i / 10;
			int onesDigit = i % 10;

			putchar(tensDigit + '0');
			putchar(onesDigit + '0');
			putchar(':');
			int tens = j / 10;
			int ones = j % 10;

			putchar(tens + '0');
			putchar(ones + '0');
			putchar('\n');
		}
	}
	putchar('\n');
}
