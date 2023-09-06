#include "main.h"
#include <stdlib.h>

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

	if (s == NULL)
		return (0);
	for (n = 0; *s != '\0'; s++)
	{
		n++;
	}
	return (n);
}

/**
 * argstostr -  function that concatenates all the arguments of your program
 * @ac: arg count
 * @av: arg valid
 * Return: pointer to args
 */

char *argstostr(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int tot = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		tot += _strlen(av[i]);
		i++;
	}
	ptr = (void *)malloc(ac + (sizeof(char) * tot) + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		while (av[i][k])
		{
			ptr[j] = av[i][k];
			j++;
			k++;
		}
		ptr[j] = '\n';
		k = 0;
		j++;
		i++;
	}
	ptr[j] = '\0';
	return (ptr);
}
