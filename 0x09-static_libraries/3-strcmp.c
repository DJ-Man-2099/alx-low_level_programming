#include "main.h"

/**
 * _strcmp - string function
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * compares s1, s2 for equality
 *
 * Return: 0 if s1 is equal to s2
 * < 0 if s1 is less than s2
 * > 0 if s1 is more than s2
 */

int _strcmp(char *s1, char *s2)
{
	do {
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	} while (*(s1 - 1) != '\0' && *(s2 - 1) != '\0');
	return (0);
}
