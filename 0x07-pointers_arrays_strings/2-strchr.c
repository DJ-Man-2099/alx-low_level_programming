#include "main.h"
#include <stddef.h>
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
 * Return: pointer of NULL
 */

char *_strchr(char *s, char c)
{

	do {
		if (*s == c)
			return (s);
		s++;
	} while (*s != '\0');

	return (NULL);
}
