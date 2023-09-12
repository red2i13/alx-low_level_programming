#include "dog.h"
#include <stdlib.h>

/**
 * ft_strlen - calc length
 * @str: string to calculate
 * Return: lentgh
 */

int ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);

}
/**
 * _strdup - copy of the string given as a parameter
 * @str: string to copy
 * @desti: distination string
 */

void _strdup(char *str, char *desti)
{
	int i = 0, j = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	while (j < i)
	{
		desti[j] = str[j];
		j++;
	}
	desti[j] = '\0';
}
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: Dog age
 * @owner: Owner name
 * Return: Dog struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(ft_strlen(name) + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(ft_strlen(owner) + 1);
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	_strdup(name, dog->name);
	_strdup(owner, dog->owner);
	dog->age = age;
	return (dog);
}
