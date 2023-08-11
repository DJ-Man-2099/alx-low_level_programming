#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _realloc - memory function
 * @ptr: pointer to old memory
 * @old_size: size of old memory
 * @new_size: size of new memory
 *
 * reallocates a memory block
 * using malloc and free
 *
 * Return: pointer to new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int size = new_size >= old_size ? old_size : new_size;

	if (new_size == old_size)
	{
		return (ptr);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL || new_size == 0)
	{
		if (new_size == 0)
		{
			free(new_ptr);
			free(ptr);
		}
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (new_ptr);
	}

	memcpy(new_ptr, ptr, old_size);

	free(ptr);

	return (new_ptr);
}
