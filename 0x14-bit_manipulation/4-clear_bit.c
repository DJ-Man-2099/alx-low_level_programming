#include "main.h"
/**
 * clear_bit - bit manipulation function
 * @n: decimal number
 * @index: bit index to get
 *
 * sets bit at index to 0
 *
 * Return: 1, or -1 (error)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int original = *n;

	original = (original & ~(((unsigned long int)(-1) >> index) << index));

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n = (((*n >> (index + 1)) << (index + 1)) | original);

	return (1);
}
