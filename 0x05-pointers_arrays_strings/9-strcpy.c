#include "main.h"

/**
 * _strcpy - pointer function.
 * @dest: pointer to destination string
 * @src: pointer to source string
 *
 * copies src string to dest string
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char c, *base;

	base = dest;
	while (*src != '\0')
	{
		c = *src;
		*base = c;
		src++;
		base++;
	}
	return (dest);
}
