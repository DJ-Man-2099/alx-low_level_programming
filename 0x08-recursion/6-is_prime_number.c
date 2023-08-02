#include "main.h"

/**
 * _temp_prime - pointer function.
 * @n: the integer to check
 * @test: the integer to test with
 *
 * returns the square root of n
 *
 * Return: sqrt(n)
 */
int _temp_prime(int n, int test)
{
	if (test >= n)
	{
		return (1);
	}
	if (n % test == 0)
	{
		return (0);
	}

	return (_temp_prime(n, test + 1));
}
/**
 * is_prime_number - recursion function.
 * @n: the integer to check
 *
 * checks if n is prime
 *
 * Return: 0 if not-prime
 * 1 if prime
 */
int is_prime_number(int n)
{
	if (n == 1 || n == -1)
		return (0);

	return (_temp_prime(n, 2));
}
