#include "main.h"

/**
 * is_root - check if a number is prime
 * @nb: number
 * @index: the root of the num
 * Return: the root if there is
 */

int is_root(int nb, int index)
{
	if (nb % index == 0)
		return (1);
	if (index * index == nb)
		return (1);
	else if (index * index > nb)
		return (0);
	return ((is_root(nb, index + 1)));
}

/**
 * is_prime_number - check prime
 * @n: number to ckeck
 * Return: 0 Or 1
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (!is_root(n, 2));
}
