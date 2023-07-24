#include "main.h"

/**
 * swap_int - pointer function.
 * @a: pointer to 1st integer
 * @b: pointer to 2nd integer
 *
 * swaps the values of two integers
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
