#include "main.h"

/**
 * _memcpy - array function
 * @dest: pointer to memory area to copy to
 * @src: pointer to memory area to copy from
 * @n: number of entries to copy
 *
 * copies n bytes from memory area src
 * to memory area dest
 *
 * Return: the pointer to dest memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
