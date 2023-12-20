#include "main.h"

/**
 * print_line - printer function.
 * @n: length of line
 *
 * prints a line of length n
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
