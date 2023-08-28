#include "main.h"
/**
  * len - calculate the length of the num
  * @nb: number
  * Return: Always i.
  */

int len(int nb)
{
	int i = 0;

	while (nb != 0)
	{
		i++;
		nb /= 10;
	}
	return (i);
}
/**
 * print_number - function that prints an integer
 * @n: number
 */

void print_number(int n)
{
	int i = 1;
	int loop = len(n);
	int dev = 1;
	int num = n;

	while (i < loop)
	{
		dev *= 10;
		i++;
	}
	i = 0;
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n > 0)
	{
		while (i < loop)
		{
			num /= dev;
			num = num % 10;
			_putchar(num + '0');
			num = n;
			dev /= 10;
			i++;
		}
	}
	else
		_putchar('0');
}
