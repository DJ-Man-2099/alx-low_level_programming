#include "dog.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * free_dog - pointer function
 * @d: pointer to dog
 *
 * frees a new dog
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
