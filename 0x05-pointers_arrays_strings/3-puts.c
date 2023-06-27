#include "main.h"

/**
 * _puts - Entry point
 *
 * Description: functionn that print a tring using pointers
 * @str: string that will be printed by function
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');

}
