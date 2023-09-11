#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print dog struct
 * @d: dog struct
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if ((*d).name)
			printf("Name: %s\n", (*d).name);
		else
			printf("Name: (nil)");
		printf("Age: %f\n", (*d).age);
		if ((*d).owner)
			printf("Owner: %s\n", (*d).owner);
		else
			printf("Owner: (nil)");
	}
	else
		return;
}
