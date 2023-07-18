#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - function
 * @n: the integer to extract
 * the last digit from
 * it returns the last digit of n
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
int result;
if (n < 0)
	n = -n;
result = n % 10;
_putchar('0' + result);
return (result);
}
