#include "dog.h"

/**
 * init_dog - initialize struct with given parameters.
 * @d: dog structure
 * @name: name
 * @age: Dog age
 * @owner: Dog Owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
