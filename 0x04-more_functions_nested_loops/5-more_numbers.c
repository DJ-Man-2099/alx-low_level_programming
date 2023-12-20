#include "main.h"

/**
 * more_numbers - printer function.
 *
 * prints 10 times the numbers,
 * from 0 to 14,
 * followed by a new line
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, j, k;

	for (k = 0; k < 10; k++)
	for (i = '0'; i <= '1'; i++)
		for (j = '0'; j <= '9'; j++)
		{
			if (i == '1')
				_putchar(i);
			_putchar(j);
			if (i == '1' && j == '4')
			{
				_putchar('\n');
				break;
			}
		}
}
