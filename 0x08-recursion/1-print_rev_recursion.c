#include "main.h"

/**
 * temp_print - temp function.
 * @str: pointer to a string
 *
 * prints a string in reverse
 * through recursion
 *
 * Return: void
 */
void temp_print(char *str)
{
	char *next;

	if (*str != '\0')
	{
		next = str + 1;
		temp_print(next);
		_putchar(*str);
	}
}
/**
 * _print_rev_recursion - pointer function.
 * @s: pointer to a string
 *
 * prints a string, in reverse
 * followed by a new line
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	temp_print(s);
}
