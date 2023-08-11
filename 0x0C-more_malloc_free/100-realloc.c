#include <stdlib.h>
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
	void *new_ptr = malloc(new_size);
	size_t copy_size = (old_size < new_size) ? old_size : new_size;

	if (new_size == 0)
	{
		free(new_ptr);
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		free(new_ptr);
		return (ptr);
	}

	if (new_ptr == NULL)
	{
		return (NULL);
	}

	memcpy(new_ptr, ptr, copy_size);
	free(ptr);

	return (new_ptr);
}
