#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int n;

	n = 63;
	clear_bit(&n, 2);
	printf("%lu\n", n);

	return (0);
}