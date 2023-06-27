#include "main.h"

/**
 * print_rev - Entry point
 * Description: print string in reverse
 * @s: string s
 */
void print_rev(char *s)
{
	int num;
	int i;

	num = _strlen(s);
	for (i = num - 1; i >= 0; i--)
	{
		_putchar(i);
	}
}

