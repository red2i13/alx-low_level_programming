#include "main.h"
#include <stdio.h>

void puts_half(char *str)
{
	int j, i = 0, len = 0;
	int n;

	while (str[i] != '\n')
	{
		len++;
		i++;
	}
	if (len % 2 != 0)
	{
		n=(len - 1) / 2;
		for (j = n; i < len; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		n = len / 2;
		for (j = n; i < len; j++)
		{
			_putchar(str[j]);
		}
	}
}

