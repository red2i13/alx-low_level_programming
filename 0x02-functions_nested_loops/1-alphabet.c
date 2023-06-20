#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Description: This function prints all the lowercase letters of the
 * alphabet using the _putchar function.
 */
void print_alphabet(void)
{
	int i = 0;
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";

	while (alpha[i] != '\0')
	{
	_putchar(alpha[i]);
	i++;
	}
	_putchar('\n');
}
