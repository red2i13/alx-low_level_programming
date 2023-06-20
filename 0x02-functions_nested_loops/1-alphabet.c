#include "main.h"

/**
 * main - Entry point
 * print_alphabet - Entry point
 *
 * Description: function responsible for printing the alphabet
 * Return: Always 0
 */

int main(void)
{
	print_alphabet();
	_putchar('\n');
	return (0);
}
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
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
