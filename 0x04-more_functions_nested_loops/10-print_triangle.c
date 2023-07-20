#include "main.h"

/**
 * print_triangle - printer function.
 * @n: dimension of triangle
 *
 * prints a triangle of length n
 *
 * Return: void
 */

void print_triangle(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j >= (n - (i + 1)))
				_putchar('#');
			else
				_putchar(' ');
		}
		if (i < n - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
