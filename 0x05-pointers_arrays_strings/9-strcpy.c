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
	char *base;

	base = dest;

	if (src[0] == '\0')
	{
		printf("empty string\n");
		*base = '\0';	
		printf("empty string, too\n");
		return (base);
	}	

	while (*src != '\0') 
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (base);
}
