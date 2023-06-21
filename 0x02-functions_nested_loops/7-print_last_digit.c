#include "main.h"

/**
 * print_last_digit - A function that prints the last digit of a number
 * @n: argument of print_last_digit
 *
 * Return: returns the last digit of a number
 */

int print_last_digit(int n)
{
	int result = n % 10;

	_putchar(result);
	return (result);
}
