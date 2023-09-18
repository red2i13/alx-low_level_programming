#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all argument passed to the function
 * @n: number of argument passed
 * Return: sum or 0 if FAIL
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	int result = 0;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		result += va_arg(args, int);
	}
	return (result);
}
