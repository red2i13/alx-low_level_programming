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
 * itoa - func
 * @num: number
 * @str: string
 * Return: string to int
 */

void itoa(int num, char *str)
{
	int i = 0;
	int j = 0;
	int sign = 0;

	if (num < 0)
	{
		sign = 1;
		num = -num;
	}

	do {
		str[i++] = num % 10 + '0';
		num /= 10;
	} while (num > 0);

	if (sign)
		str[i++] = '-';

	while (j < i / 2)
	{
		char tmp = str[j];

		str[j] = str[i - j - 1];
		str[i - j - 1] = tmp;
		j++;
	}

	str[i] = '\0';
}

/**
 * main - calculate add
 * @ac: arg count
 * @av: arg var
 * Return: 0
 */

int main(int ac, char **av)
{
	int add;
	int i = 1;
	int j = 0;
	char result[99];

	if (ac != 3)
	{
		write(1, "0\n", 2);
		return (1);
	}
	while (i < ac)
	{
		while (av[i][j])
		{
			if (!(av[i][j] == '-' || (av[i][j] >= '0' && av[i][j] <= '9')))
			{
				write(1, "Error\n", 6);
				return (1);
			}
			j++;
		}
		j = 0;
		add += atoi(av[i]);
		i++;
	}
	itoa(add, result);
	i = 0;
	while (result[i] != '\0')
	{
		write(1, &result[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
