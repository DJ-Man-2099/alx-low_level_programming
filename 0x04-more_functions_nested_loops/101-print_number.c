#include "main.h"
#include <math.h>
/**
 * print_number - printer function.
 * @n: number to be printed
 *
 * prints n
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int current;

	if (n == 0)
		_putchar('0');

	else if (n > 0)
		current = n;
	else if (n < 0)
	{
		_putchar('-');
		current = -n;
	}
	if (current < 10)
		_putchar('0' + n);
	else
	{
		current = n;
		print_number(current / 10);
		_putchar('0' + (current % 10));
	}
}
