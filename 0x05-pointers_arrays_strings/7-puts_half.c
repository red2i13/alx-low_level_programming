#include "main.h"
#include <stdio.h>

/**
 * puts_half - print half string
 * @str: string
 */

void puts_half(char *str)
{
	int j, len = 0;
	int n;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 != 0 && len > 0)
	{
		n = (len - 1) / 2;
		for (j = n + 1; j < len; j++)
		{
			_putchar(str[j]);
		}
	}
	else if (len > 0)
	{
		n = len / 2;
		for (j = n; j < len; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}

