#include "main.h"
#include <stdio.h>
/**
 * _strchr - string function
 * @s: pointer to string to search
 * @c: char to search for
 *
 * returns a pointer to the first
 * occurrence of the character c
 * in the string s,
 * or NULL if the character is not found
 *
 * Return: pointer or NULL
 */

char *_strchr(char *s, char c)
{
	char *base = s;
	while (*base != '\0')
	{
		if (*base == c)
			return (base);
		base++;
	}

	return (NULL);
}
