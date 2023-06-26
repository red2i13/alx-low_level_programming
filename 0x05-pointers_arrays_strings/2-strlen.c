#include "main.h"

/**
 * _strlen - Entry point
 *
 * Description: returns the length of a string
 *
 * @s: string of characters
 *
 * Return: Always n
 */

int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
	{
		n++;
	}
	return (n);

}
