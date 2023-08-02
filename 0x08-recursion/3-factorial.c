#include "main.h"

/*
 * factorial - pointer function.
 * @s: pointer to a string
 *
 * prints a string, using recursion
 * followed by a new line
 *
 * Return: void
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
