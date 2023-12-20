#include "main.h"

/**
 * print_square - printer function.
 * @n: dimension of square
 *
 * prints a square of length n
 *
 * Return: void
 */

void print_square(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			_putchar('#');
		if (i < n - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
