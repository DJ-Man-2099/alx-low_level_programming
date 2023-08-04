#include "main.h"

/**
 * _strlen - pointer function.
 * @s: pointer to a string
 *
 * returns the length of a string in s
 *
 * Return: length of string s
 */

int _strlen(char *s)
{
	int charSize, count;

	charSize = sizeof(*s);
	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (charSize * count);
}
