#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase.
 *
 * Description: This function prints all the lowercase letters of the
 * alphabet using the _putchar function.
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int j = 0;
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";

	while (j < 10)
	{
		while (alpha[i] != '\0')
		{
			_putchar(alpha[i]);
			i++;
		}
		i = 0
		_putchar('\n');
		j++;
	}
}
