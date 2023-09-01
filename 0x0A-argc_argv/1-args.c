#include "main.h"
#include <unistd.h>

/**
 * main - print arg passed to it
 * @ac: argument count
 * @av: argument var
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	int num;

	(void)av;
	num = ac - 1 + '0';
	write(1, &num, 1);
	write(1, "\n", 1);
	return (0);
}
