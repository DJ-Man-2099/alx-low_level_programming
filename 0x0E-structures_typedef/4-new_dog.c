#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - pointer function
 * @name: name of dog
 * @age: name of dog
 * @owner: name of dog
 *
 * creates a new dog
 *
 * Return: pointer to new dog
 * NULL if failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *temp_name = name, *temp_owner = owner;

	dog_t *temp = malloc(1 * sizeof(*temp));

	if (temp == NULL)
	{
		return (NULL);
	}

	temp->age = age;
	temp->name = temp_name;
	temp->owner = temp_owner;

	return (temp);
}
