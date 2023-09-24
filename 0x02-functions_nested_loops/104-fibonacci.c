#include <stdio.h>
#include "main.h"

/**
 * sum_big - big_num
 * @a: big_num
 * @b: big_num
 *
 * Sums the big nums
 *
 * Return: a + b
 */
big_num sum_big(big_num a, big_num b)
{
	big_num sum = {0, 0};

	sum.high_half += a.high_half + b.high_half;
	if (a.low_half + b.low_half >= LIMIT)
		sum.high_half += (a.low_half + b.low_half) / LIMIT;
	sum.low_half = (a.low_half + b.low_half) % LIMIT;

	return (sum);
}
/**
 * assign_big - big_num
 * @src: big_num
 *
 * Sums the big nums
 *
 * Return: a => b
 */
big_num assign_big(big_num src)
{
	big_num dest = {0, 0};

	dest.high_half = src.high_half;
	dest.low_half = src.low_half % LIMIT;
	return (dest);
}
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
	big_num a = {1, 0},
			b = {2, 0},
			sum = {0, 0};

	printf("%ld, %ld, ", a.low_half, b.low_half);
	for (i = 2; i < 98; i++)
	{
		sum = sum_big(a, b);
		if (sum.high_half > 0)
			printf("%ld", sum.high_half);
		printf("%ld", sum.low_half);
		if (i != 97)
			printf(", ");
		a = assign_big(b);
		b = assign_big(sum);
	}
	printf("\n");
	return (0);
}
