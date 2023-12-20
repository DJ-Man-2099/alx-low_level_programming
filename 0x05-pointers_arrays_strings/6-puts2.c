#include "main.h"
#include <stdbool.h>
/**
 * temp_print - temp function.
 * @str: pointer to a string
 * @print: condition of print
 *
 * prints a string, even chars
 * through recursion
 *
 * Return: void
 */
void temp_print(char *str, bool print)
{
	char *next;

	if (*str != '\0')
	{
		next = str + 1;
		if (print)
			_putchar(*str);
		temp_print(next, !print);
	}
}
/**
 * puts2 - pointer function.
 * @s: pointer to a string
 *
 * prints a string, in reverse
 * followed by a new line
 *
 * Return: void
 */
void puts2(char *s)
{
	temp_print(s, true);
	_putchar('\n');
}
