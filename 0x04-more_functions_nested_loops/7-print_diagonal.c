#include "main.h"

/**
 * print_diagonal - printer function.
 * @n: length of line
 *
 * prints a line of length n
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar('\\');
		if (i < n - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
