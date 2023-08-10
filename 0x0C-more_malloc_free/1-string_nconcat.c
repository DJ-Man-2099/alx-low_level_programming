#include <stdlib.h>
#include "main.h"
/**
 * _strlen - string function
 * @s: String
 *
 * gets length of s
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
/**
 * string_nconcat - memory function
 * @s1: first String
 * @s2: size of memory
 * @n: size of memory
 *
 * reserves memory of size b,
 *
 * Return: Null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr, *base_s1 = s1, *base_s2 = s2, *base_ptr;
	unsigned int i, s1_length = 0;

	if (s1 == NULL)
	{
		s1 = "";
		base_s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
		base_s2 = "";
	}

	s1_length = _strlen(base_s1);

	ptr = malloc((n + s1_length) * (sizeof(*ptr)));

	if (ptr == NULL)
	{
		return (NULL);
	}

	base_ptr = ptr;

	while (*base_s1 != '\0')
	{
		*base_ptr = *base_s1;
		base_ptr++;
		base_s1++;
	}

	for (i = 0; i < n && base_s2[i] != '\0'; i++)
	{
		*base_ptr = base_s2[i];
		base_ptr++;
	}

	return (ptr);
}
