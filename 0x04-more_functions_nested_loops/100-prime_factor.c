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
	long int i, value, limit;

	value = 612852475143;
	limit = sqrt(value);

	for (i = 3; i <= limit; i++)
	{
		while (value % i == 0)
		{
			value /= i;
		}
	}
	printf("%ld\n", i);
	return (0);
}
