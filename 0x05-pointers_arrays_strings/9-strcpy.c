#include "main.h"
#include <stdio.h>
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
		*dest = c;
		src++;
		dest++;
	} while (*src != '\0');

	*dest = '\0';

	return (base);
}
