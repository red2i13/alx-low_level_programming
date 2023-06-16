#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0
 */
/* betty style doc for function main goes thiere */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%i\n", n is positive);
	else if (n < 0)
		printf("%i\n", n is negative);
	else
		printf("%i\n", n is zero);
	return (0);
}
