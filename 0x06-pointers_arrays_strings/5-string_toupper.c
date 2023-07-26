#include "main.h"

/**
 * string_toupper - string function
 * @str: pointer to string
 *
 * changes all lowercase letters of a string to uppercase
 *
 * Return: the pointer to Uppercased String
 */

char *string_toupper(char *str)
{
	char *base = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 'a' - 'A';
		str++;
	}
	return (base);
}
