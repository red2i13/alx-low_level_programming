#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * @n: Starting point
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
			printf("%d, ", n++);
	}
	else if (n > 98)
	{
		while (n > 98)
			printf("%d, ", n--);
	}
	printf("98\n");
}
