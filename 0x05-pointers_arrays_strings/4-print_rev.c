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
		_putchar(s[i]);
	}
	_putchar('\n');
}

/**
 * _strlen - Entry point
 *
 * Description: returns the length of a string
 *
 * @str: string of characters
 *
 * Return: Always n
 */

int _strlen(char *str)
{
	int n;

	for (n = 0; *str != '\0'; str++)
	{
		n++;
	}
	return (n);

}
