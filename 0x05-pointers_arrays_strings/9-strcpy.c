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
	do {
		c = *src;
		*base = c;
		src++;
		base++;
	} while (*src != '\0');

	return (dest);
}
