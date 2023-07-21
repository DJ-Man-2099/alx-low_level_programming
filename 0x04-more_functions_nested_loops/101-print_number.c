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

	else if (n < 0)
	{
		_putchar('-');
		current = -n;
		print_number(current);
	}

	else
	{
		if (n > 1000000000)
		{
		       print_number(n / 1000000000);
		       print_number(n % 1000000000);
		}	       
		else if (n > 0 && n < 10)
			_putchar('0' + n);
		else
		{
			current = n;
			print_number(current / 10);
			_putchar('0' + (current % 10));
		}
	}
}
