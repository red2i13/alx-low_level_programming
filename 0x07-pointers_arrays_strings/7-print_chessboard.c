#include <unistd.h>
#include "main.h"

/**
 * print_chessboard - the name says all
 * @a: board
 */
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	while (i < 8)
	{
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		j = 0;
		_putchar('\n');
		i++;
	}
}
