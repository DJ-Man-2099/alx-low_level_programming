#include "main.h"

/**
 * _strcat - string function
 * @dest: pointer to string to concat to
 * @src: pointer to string to concat from
 *
 * appends the src string to the dest string
 *
 * Return: the pointer to concat string
 */

char *_strcat(char *dest, char *src)
{
	char *base = dest;

	while (*base != '\0')
	{
		base++;
	}
	while (*src != '\0')
	{
		*base = *src;
		base++;
		src++;
	}
	base = '\0';
	return (dest);
}
