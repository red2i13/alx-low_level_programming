#include <unistd.h>
#include <stdio.h>

/**
 * atoi - func
 * @str: string
 * Return: result
 */

int atoi(char *str)
{
	int i = 0;
	int result = 0;
	int sign = 1;

	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
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
				write(1, "Error\n", 6);
				return (1);
			}
			j++;
		}
		j = 0;
		i++;
	}
	for (i = 1; i < ac; i++)
	{
		result += atoi(av[i]);
	}
	printf("%d\n", result);
	return (0);
}
