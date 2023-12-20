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
	int i = 0;

	char *base = str;
	char *symbols = "aeotl", *numbers = "43071";

	while (*str != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*str == symbols[i] || *str == symbols[i] - 'a' + 'A')
			{
				*str = numbers[i];
				break;
			}
		}
		str++;
	}
	return (base);
}
