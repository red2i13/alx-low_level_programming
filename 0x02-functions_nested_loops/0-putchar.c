#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Dscripiton: program that print "_putchar" statement
 *
 * Return: Always 0
 */

int main(void)
{

	int i = 0;
	char word[] = "_putchar";

	while (word[i] != \0)
	{
		putchar(word[i]);
		i++;
	}
		putchar('\n');
	return (0);
}
