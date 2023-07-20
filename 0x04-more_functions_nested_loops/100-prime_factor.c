#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * main - interview function.
 *
 * prints the numbers from 1 to 100,
 * followed by a new line.
 * But for multiples of three print Fizz instead of the number
 * for the multiples of five print Buzz.
 * For numbers which are multiples of both three and five print FizzBuzz.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int i, value, orig, max;

	value = 612852475143;
	orig = sqrt(value);
/*
 *	printf("%ld\n", orig);
 *	while (value % 2 == 0)
 *	{
 *		printf("2, ");
 *		value /= 2;
 *	}
 */
	for (i = 3; i <= orig; i++)
	{
		if (value % i == 0)
		{
			max = i;
		/*
		 * printf("%ld, ", max);
		 */
		}
	}
	printf("%ld\n", max);
	return (0);
}
