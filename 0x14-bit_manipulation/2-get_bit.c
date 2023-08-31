#include "main.h"
/**
 * get_bit - bit manipulation function
 * @n: decimal number
 * @index: bit index to get
 *
 * gets bit at index
 *
 * Return: 0, or -1 (error)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
