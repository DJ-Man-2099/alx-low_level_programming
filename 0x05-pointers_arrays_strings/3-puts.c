#include "main.h"

/**
 * _puts - pointer function.
 * @str: pointer to a string
 *
 * prints a string, followed by a new line
 *
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
