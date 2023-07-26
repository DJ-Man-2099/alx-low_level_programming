#include "main.h"

/**
 * leet - string function
 * @str: pointer to string to convert
 *
 * appends the src string to the dest string
 *
 * Return: the pointer to concat string
 */

char *leet(char *str)
{
	char *base = str;

	while (*str != '\0')
	{
		if (*str == 'a' || *str == 'A')
			*str = '4';
		else if (*str == 'e' || *str == 'E')
			*str = '3';
		else if (*str == 'o' || *str == 'o')
			*str = '0';
		else if (*str == 't' || *str == 't')
			*str = '7';
		else if (*str == 'l' || *str == 'L')
			*str = '1';
		str++;
	}
	return (base);
}
