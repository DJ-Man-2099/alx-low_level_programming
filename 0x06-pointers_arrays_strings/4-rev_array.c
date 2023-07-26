#include "main.h"

/**
 * reverse_array - array function
 * @a: pointer to array to reverse
 * @n: length of array
 *
 * reverses the content of an array of integers
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	if (n != 0 && n != 0)
	{
		for (i = 0; i < n / 2; i++)
		{
			temp = *(a + i);
			*(a + i) = *(a + n - 1 - i);
			*(a + n - 1 - i) = temp;
		}
	}
}
