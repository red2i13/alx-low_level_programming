#include "function_pointers.h"

/**
 * print_name - prints the name
 * @name: name to print
 * @f: pointer to a function responsible for printing name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
