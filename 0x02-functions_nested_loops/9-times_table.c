#include <stdio.h>
#include "main.h"
/**
 * times_table - function
 *
 * it prints 9 * 9 time table
 *
 * Return: void
 */
void times_table(void)
{
int a, b, a_times_b;

for (a = 0; a <= 9; a++)
{
	for (b = 0; b <= 9; b++)
	{
		a_times_b = a * b;
		if (a_times_b >= 10)
		{
			_putchar('0' + (a_times_b / 10));
		} else if (b > 0)
		{
			_putchar(' ');
		}
		_putchar('0' + (a_times_b % 10));
		if (b < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
}
