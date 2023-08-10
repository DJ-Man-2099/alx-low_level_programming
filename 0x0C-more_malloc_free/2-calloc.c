#include <stdlib.h>
#include "main.h"
/**
 * _calloc - memory function
 * @nmemb: number of elements
 * @size: size of element
 *
 * reserves array of size size * nmemb,
 *
 * Return: pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	return (ptr);
}
