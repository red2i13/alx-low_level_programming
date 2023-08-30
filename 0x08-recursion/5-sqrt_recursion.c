#include "main.h"

/**
 * is_prime - check if a number is prime
 * @nb: number
 * @index: the root of the num
 * Return: the root if there is
 */

int is_prime(int nb, int index)
{
	if (index * index == nb)
		return (index);
	else if (index * index > nb)
		return (-1);
	return ((is_prime(nb, index + 1)));
}

/**
 * _sqrt_recursion - Check if a number is prime
 * @n: number to check
 * Return: The value if the number has root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (is_prime(n, 0));
}
