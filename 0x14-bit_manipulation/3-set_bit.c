#include "main.h"
/**
 * set_bit - bit manipulation function
 * @n: decimal number
 * @index: bit index to get
 *
 * sets bit at index to 1
 *
 * Return: 1 or -1 (error)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int original = *n;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n = (((*n >> index) | 1) << index) | original;
	return (1);
}
