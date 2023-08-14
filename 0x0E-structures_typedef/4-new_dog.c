#include "dog.h"
#include <stdlib.h>
#include <string.h>
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
	char *temp_name, *temp_owner;
	dog_t *temp;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	temp_name = malloc((strlen(name) + 1) * sizeof(*name));
	temp_owner = malloc((strlen(owner) + 1) * sizeof(*owner));
	temp = malloc(sizeof(*temp));

	if (temp == NULL || temp_name == NULL || temp_owner == NULL)
	{
		free(temp_name);
		free(temp_owner);
		free(temp);
		return (NULL);
	}

	memcpy(temp_name, name, (strlen(name) + 1) * sizeof(*name));
	memcpy(temp_owner, owner, (strlen(owner) + 1) * sizeof(*owner));

	temp->age = age;
	temp->name = temp_name;
	temp->owner = temp_owner;

	return (temp);
}
