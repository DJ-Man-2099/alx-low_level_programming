#include "main.h"

/**
 * _strncat - string function
 * @dest: pointer to string to concat to
 * @src: pointer to string to concat from
 * @n: the max number of characters
 *
 * appends the src string to the dest string
 *
 * Return: the pointer to concat string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *base = dest;

	while (*base != '\0')
	{
		base++;
	}
	for (i = 0; *src != '\0' && i < n; i++)
	{
		*base = *src;
		base++;
		src++;
	}
	base = '\0';
	return (dest);
}
