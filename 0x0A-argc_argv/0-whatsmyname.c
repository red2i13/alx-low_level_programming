#include "main.h"
#include <unistd.h>

/**
 * main - print program name
 * @ac: argument count
 * @av: argument var
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	int i = 0;
	(void)ac;

	while (av[0][i] != '\0')
	{
		write(1, &av[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
