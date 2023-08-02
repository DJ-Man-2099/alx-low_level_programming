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
 * _puts_recursion - pointer function.
 * @s: pointer to a string
 *
 * prints a string, in reverse
 * followed by a new line
 *
 * Return: void
 */
void _puts_recursion(char *s)
{

	_putchar('\n');
}
