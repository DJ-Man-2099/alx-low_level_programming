#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - memory function
 * @b: size of memory
 *
 * reserves memory of size b,
 *
 * Return: Null
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
