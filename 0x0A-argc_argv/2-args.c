#include <unistd.h>

/**
 * main - print all arg
 * @ac: arg count
 * @av: arg var
 * Return: Always 0
 */

int main(int ac, char **av)
{
	int i = 0;
	int j = 0;

	while (i < ac)
	{
		while (av[i][j] != '\0')
		{
			write(1, &av[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		j = 0;
		i++;
	}
	return (0);
}
