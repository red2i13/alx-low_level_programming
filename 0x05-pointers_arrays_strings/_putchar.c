#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int	main(void)
{
	char str[8] = "_putchar";
	int i = 0;

	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
