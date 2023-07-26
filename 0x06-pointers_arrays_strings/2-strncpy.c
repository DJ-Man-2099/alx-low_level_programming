#include "main.h"
#include <stdio.h>
/**
 * _strncpy - pointer function.
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: the max number of chars to copy
 *
 * copies src string to dest string
 *
 * Return: the pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *base;
	int i;

	base = dest;

	if (src[0] == '\0')
	{
		*base = '\0';
		return (base);
	}

	for (i = 0; i < n && *src != '\0'; i++)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';

	return (base);
}
