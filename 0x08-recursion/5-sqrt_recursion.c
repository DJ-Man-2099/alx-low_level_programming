#include "main.h"

/**
 * _temp_recursion - pointer function.
 * @n: the integer to get its sqrt
 * @test: the integer to test with
 *
 * returns the square root of n
 *
 * Return: sqrt(n)
 */
int _temp_recursion(int n, int test)
{
	if (test * test == n)
	{
		return (test);
	}
	if (test > n)
	{
		return (-1);
	}

	return (_temp_recursion(n, test + 1));
}
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
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);

	return (_temp_recursion(n, 2));
}
