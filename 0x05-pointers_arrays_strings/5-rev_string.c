#include "main.h"
#include <stdio.h>

/**
 * rev_string - Entry point
 * Description: string in reverse
 * @s: string s
 */
void rev_string(char *s)
{
	int i = 0;
	char tmp;
	int num = 0;

	while (s[i] != '\0')
	{
		num++;
		i++;
	}

	for (i = 0; i < num / 2; i++)
	{
		tmp = s[i];
		s[i] = s[num - i - 1];
		s[num - i - 1] = tmp;
	}
}
