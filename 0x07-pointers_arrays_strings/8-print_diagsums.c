#include "main.h"
#include <stdbool.h>
#include <stdio.h>
/**
 * print_diagsums - string function
 * @a: pointer to board
 * @size: size of Matrix
 *
 * prints the sum of diagonals
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, sum = 0, otherSum = 0;

	for (i = 0; i < size; i++)
	{
		sum += *(a + i * size + i);
		otherSum += *(a + i * size + size - i - 1);
	}
	printf("%d, %d\n", sum, otherSum);
}
