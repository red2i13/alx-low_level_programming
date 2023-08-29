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
	int loop;
	int dev = 1;
	int num = n;

	if (n == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		n = 147483648;
	}
	loop = len(n);
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
		num = n;
	}
	if (n > 0)
	{
		while (i < loop)
		{
			num = n / dev;
			num = num % 10;
			_putchar(num + '0');
			dev /= 10;
			i++;
		}
	}
	else
		_putchar('0');
}
