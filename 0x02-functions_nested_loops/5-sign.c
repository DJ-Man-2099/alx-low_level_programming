#include <stdio.h>
#include "main.h"
/**
 * print_sign - function
 * @n: the integer to be checked
 * it prints the sign of a number
 *
 * Return: 1 if n is greater than zero,
 * -1 if n is less than zero
 * 0 otherwise
 */
int print_sign(int n)
{
if (n > 0)
{
	_putchar('+');
	return (1);
}
if (n < 0)
{
	_putchar('-');
	return (-1);
}
_putchar('0');
return (0);
}
