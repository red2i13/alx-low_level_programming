#include "main.h"
#include <stdio.h>

/**
 * rev_string - Entry point
 * Description: string in reverse
 * @s: string s
 */
void rev_string(char *s)
{
	int num, i;
	char tmp;

	num = _strlen(s);

	for (i = 0; i < num / 2; i++)
	{
		tmp = s[i];
		s[i] = s[num - i - 1];
		s[num - i - 1] = tmp;
	}
}

int _strlen(char *str)
{
	int n;

	for (n = 0; *str != '\0'; str++)
	{
		n++;
	}
	return (n);

}
