#include "main.h"
#include <stdbool.h>
#include <stdio.h>

void convert(char *str, unsigned int *number, unsigned int *decimal)
{
	convert(str + 1, number, decimal);
	if (*str <= '0' && *str >= '9')
	{
		*number = (*str - '0') * (*decimal);
		(*decimal) *= 10;
		printf("%d\n", *number);
	}
}

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
		else if (*s <= '0' && *s >= '9')
		{
			convert(s, &number, &decimal);
			break;
		}
		s++;
	}
	if (negative)
		return (-number);
	return (number);
}
