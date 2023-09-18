#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - a mimic of function printf
 * @format: data type specifier
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int flag;
	int i = 0;

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				flag = 0;
				break;
			case 's':
				printf("%s", va_arg(args, char*));
				flag = 0;
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (format[i + 1] != '\0' && flag == 0)
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}
