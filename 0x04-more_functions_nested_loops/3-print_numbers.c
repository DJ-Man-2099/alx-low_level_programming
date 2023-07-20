#include "main.h"

/**
 * print_numbers - printer function.
 *
 * prints numbers from 0 to 9
 *
 * Return: void
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
