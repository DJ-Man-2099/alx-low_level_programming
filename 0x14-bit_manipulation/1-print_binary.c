#include "main.h"
/**
 * print_binary - bit manipulation function
 * @n: decimal number
 *
 * converts decimal to binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if ((n >> 1) > 0)
	{
		print_binary(n >> 1);
	}
	_putchar('0' + (n & 1));
}
