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

	new_ptr = malloc(new_size);

	if (ptr == NULL)
	{
		return (new_ptr);
	}

	if (new_size == old_size)
	{
		free(new_ptr);
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		free(new_ptr);
		return (NULL);
	}

	if (new_ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	memcpy(new_ptr, ptr, size);

	free(ptr);

	return (new_ptr);
}
