#include "main.h"
#include <stdbool.h>
#include <stdio.h>

/**
 * _atoi - pointer function.
 * @s: pointer to string
 *
 * converts string to integer
 *
 * Return: number in string
 */

int _atoi(char *s)
{
	unsigned int number, decimal;
	bool negative = false;

	number = 0;
	decimal = 1;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			negative = !negative;
		}
		else if (*s >= '0' && *s <= '9')
		{
			break;
		}
		s++;
	}
	if (negative)
		return (-number);
	return (number);
}
