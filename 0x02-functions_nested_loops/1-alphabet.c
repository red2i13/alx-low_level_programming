#include "main.h"

/**
 * main - Entry point
 *
 * Decription: Program prints alphabet in lowercase
 *
 * Return: Always 0
 */

void print_alphabet(void);
int main(void)
{
	print_alphabet();
	return (0);
}
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
