#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * ft_atoi - func
 * @str: string
 * Return: result
 */

int ft_atoi(char *str)
{
	int i = 0;
	int result = 0;

	while (str[i] != '\0')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result);
}

/**
 * main - calculate add
 * @ac: arg count
 * @av: arg var
 * Return: 0
 */

int main(int ac, char **av)
{
	int i = 1;
	int j = 0;
	int result = 0;

	if (ac == 1)
	{
		write(1, "0\n", 2);
		return (1);
	}
	while (i < ac)
	{
		while (av[i][j])
		{
			if (!(av[i][j] >= '0' && av[i][j] <= '9'))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		j = 0;
		i++;
	}
	for (i = 1; i < ac; i++)
	{
		result += ft_atoi(av[i]);
	}
	printf("%d\n", result);
	return (0);
}
