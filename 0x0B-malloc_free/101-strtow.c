#include "main.h"
#include <stdlib.h>

char **strtow(char *str)
{
	int i = 0;
	int j = 0;
	int l = 0;
	int k = 0;
	int len = 0;
	char **ptr;
	while (str[i] != '\0' && str[i] == ' ')
	{
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] == ' ' && (str[i + 1] >= 33 && str[i + 1] <= 126))
			len++;;
		i++;
	}
	len++;
	ptr = malloc(sizeof(char *) * len);
	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			while (str[i] != ' ')
			{
				len++;
				i++;
			}
			ptr[j] = (char *)malloc(sizeof(char) * (len + 1));
		}
		for (k = 0, l = 0; k <= len; l++, j++)
			ptr[j][k] = str[l];
		ptr[i][j] = '\0';
		len = 0;
		i++;
		j++;
	}
	return (ptr);
}
