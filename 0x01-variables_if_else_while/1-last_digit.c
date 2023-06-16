#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/*
 * main - Entry point
 *
 * Return: Always 0
 */
/* betty style doc for function main goes thiere */
int main(void)
{
	int n;
	int digit = 0;
	srand(time(0));

	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	digit = abs(n) % 10;
	if (n < 0)
	digit = -1 * digit;
	if (digit > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, digit);
	else if (digit == 0)
		printf("Last digit of %i is %i and is 0\n", n, digit);
	else
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, digit);
	return (0);
}
