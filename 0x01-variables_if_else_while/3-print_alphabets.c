#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 97;
	while (i <= 122)
		putchar(i++);
	i = 65;
	while (i <= 90)
		putchar(i++);
	putchar(10);
	return (0);
}
