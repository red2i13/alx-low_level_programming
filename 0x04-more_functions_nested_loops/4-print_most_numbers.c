#include "main.h"

/**
 * print_most_numbers - Entry point
 *
 * Description: functions displays nubmers
 */

void print_most_numbers(void)
{
	char numbers[] = "01356789";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(numbers[i]);
	}
	_putchar('\n');
}	
