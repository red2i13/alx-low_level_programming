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
 * main - calculate mul
 * @ac: arg count
 * @av: arg var
 * Return: 0
 */

int main(int ac, char **av)
{
	int mul;
	int i = 2;
	char msg[] = "Error\n";
	char result[99];

	if (ac != 3)
	{
		write(1, &msg, 6);
		return (1);
	}
	mul = atoi(av[1]);
	while (i < ac)
	{
		mul *= atoi(av[i]);
		i++;
	}
	itoa(mul, result);
	i = 0;
	while (result[i] != '\0')
	{
		write(1, &result[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
