#include "main.h"

/**
 * _memset - array function
 * @s: pointer to memory area to fill
 * @b: const to fill array with
 * @n: size of array to fill
 *
 * fills the first n bytes of s
 * with the constant byte b
 *
 * Return: the pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
