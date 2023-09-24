#include <stdio.h>
#include "main.h"
#define LIMIT 1000000000000000000
/**
 * main - prints sum of natural numbers
 * that are below 1024
 * and are multiples of 3, 5
 *
 * Return: void
 */
int main(void)
{
	int i;
	long int low_a, low_b, low_sum = 0;
	long int high_a = 0, high_b = 0, high_sum = 0;

	low_a = 1;
	low_b = 2;
	printf("%ld, %ld, ", low_a, low_b);
	for (i = 2; i < 98; i++)
	{
		if (low_a > LIMIT)
		{
			high_a += low_a / LIMIT;
			low_a = low_a % LIMIT;
		}
		if (low_b > LIMIT)
		{
			high_b += low_b / LIMIT;
			low_b = low_b % LIMIT;
		}
		high_sum = high_a + high_b;
		if (high_sum > 0)
			printf("%ld", high_sum);
		low_sum = low_a + low_b;
		printf("%ld", low_sum);
		if (i != 97)
		{
			printf(", ");
		}
		low_a = low_b;
		low_b = low_sum;
		high_a = high_b;
		high_b = high_sum;
	}
	printf("\n");
	return (0);
}
