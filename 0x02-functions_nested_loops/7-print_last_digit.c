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
result = n % 10;
if (result < 0)
	result = -result;
_putchar('0' + result);
return (result);
}
