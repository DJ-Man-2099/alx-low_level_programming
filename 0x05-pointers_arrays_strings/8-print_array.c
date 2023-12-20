#include "main.h"
#include <stdio.h>

/**
 * print_array - pointer function.
 * @a: pointer to int array
 * @n: number of numbers to print
 *
 * prints n integers, followed by a new line
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
