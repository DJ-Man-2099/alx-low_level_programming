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
	if (n == 0)
		_putchar('0');

	else if (n < 0)
	{
		_putchar('-');
		if (n > -10)
			_putchar('0' - (-n));
		else
		{
			print_number((-n) / 10);
			_putchar('0' + ((-n) % 10));
		}
	}

	else
	{
		if (n > 0 && n < 10)
			_putchar('0' + n);
		else
		{
			print_number(n / 10);
			_putchar('0' + (n % 10));
		}
	}
}
