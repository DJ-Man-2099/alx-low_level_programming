#include "main.h"

/**
 * _sqrt_recursion - pointer function.
 * @n: the integer to get its sqrt
 *
 * returns the square root of n
 *
 * Return: sqrt(n)
 */
int _sqrt_recursion(int n)
{
	int i;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	for (i = 0; i < n; i++)
	{
		if (i * i == n)
		{
			return (i);
		}
	}
	return (-1);
}