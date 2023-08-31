#include "main.h"
/**
 * flip_bits - bit manipulation function
 * @n: decimal number
 * @m: 2nd decimal number
 *
 * get different bits
 *
 * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference = 0, binary = n ^ m;
	unsigned long int bigger = n >= m ? n : m, len = 0, i;

	while (bigger > 0)
	{
		bigger >>= 1;
		len++;
	}

	for (i = 0; i < len; i++)
	{
		difference += binary & 1;
		binary >>= 1;
	}

	return (difference);
}
