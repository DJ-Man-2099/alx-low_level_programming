#include <stdio.h>
#include "main.h"
/**
 * print_times_table - function
 *
 * @n: the time table limit
 * it prints n * n time table
 *
 * Return: void
 */
void print_times_table(int n)
{
int a, b, a_times_b;
if (n <= 15 && n >= 0)
{
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			a_times_b = a * b;
			if (b > 0 && a_times_b >= 100)
			{
				_putchar(' ');
				_putchar('0' + (a_times_b / 100));
				_putchar('0' + ((a_times_b / 10) % 10));
			}
			else if (b > 0 && a_times_b >= 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + (a_times_b / 10));
			} else if (b > 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
			}
			_putchar('0' + (a_times_b % 10));
			if (b < n)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
}
