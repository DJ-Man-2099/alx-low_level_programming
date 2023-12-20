#include "main.h"

/**
 * _pow_recursion - pointer function.
 * @x: the integer to multiply
 * @y: its power
 *
 * returns x raised to the power of y
 *
 * Return: x^y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
