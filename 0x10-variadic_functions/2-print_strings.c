#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print strings follow by a new line
 * @separator: ...
 * @n: number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		const char *str = va_arg(args, const char *);

		if (str)
			printf("%s", va_arg(args, char *));
		else if (!str)
			printf("(nil)");
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
