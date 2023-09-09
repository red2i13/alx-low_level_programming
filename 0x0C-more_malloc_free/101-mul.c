#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * checks - Function checks if all string contains digits
 * @str: string
 * Return: 1 if success of 0, -1 if fail
 */

int checks(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		else if (i >= 10)
			return (-1);
	}
	return (1);
}
/**
 * f_itoa - integer to ascii
 * @nb: number
 * Return: ascci to int
 */

char *f_itoa(int nb)
{
	int len = 0;
	int i = nb;
	char *ptr;

	while (i != 0)
	{
		i = i / 10;
		len++;
	}
	ptr = (char *) malloc((len + 1) * sizeof(char));
	i = len - 1;
	ptr[0] = '\0';
	while (nb != 0)
	{
		ptr[i] = nb % 10 + 48;
		nb /= 10;
		i--;
	}
	ptr[len] = '\0';
	return (ptr);
}
/**
 * f_atoi - ascii to integer
 * @nb : number in asscii representation
 * Return: integer
 */

int f_atoi(char *nb)
{
	int i = 0, j = 0;
	int result = 0;

	while (nb[i])
		i++;
	while (j < i)
	{
		result = result * 10 + nb[j] - '0';
		j++;
	}
	return (result);

}
/**
 * main - main function
 * @ac: arg count
 * @av: table arguments
 * Return: 0 if Success
 */

int main(int ac, char **av)
{
	if (ac == 3)
	{
		int num1 = f_atoi(av[1]);
		int num2 = f_atoi(av[2]), mul, i = 0;
		char *result;

		if (checks(av[1]) == 0 || checks(av[2]) == 0)
		{
			write(1, "Error\n", 6);
			exit(98);
		}
		else if (checks(av[1]) == -1 || checks(av[2]) == -1)
			exit(98);
		mul = num1 * num2;
		result = f_itoa(mul);
		for (i = 0; result[i]; i++)
		{
			write(1, &result[i], 1);
		}
		write(1, "\n", 1);
	}
	else
	{
		write(1, "Error\n", 6);
		exit(98);
	}
	return (0);
}
