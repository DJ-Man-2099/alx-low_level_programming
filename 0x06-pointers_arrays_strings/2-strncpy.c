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

	for (i = 0; i < n; i++)
	{
		if (*src != '\0')
		{
			*dest = *src;
			src++;
		}
		else
		{
			*dest = '\0';
		}
		dest++;
	}

	return (base);
}
