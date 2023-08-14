#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - struct function
 * @d: struct (dog) to initialize
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * initializes the dog with the passed data
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->age = age;
		d->name = name;
		d->owner = owner;
	}
}
