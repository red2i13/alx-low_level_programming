#include "main.h"

/**
 * swap_int - Entry point
 *
 * Description: swaps the value of two variables
 *
 * @a: First variable
 * @b: second variable
 */

void swap_int(int *a, int *b)
{
	int sw;

	sw = *a;
	*a = *b;
	*b = sw;

}
