#include "variadic_functions.h"
#include <stdlib.h>
/**
 * sum_them_all - variadic function
 * @n: number of args
 * @...: arguments
 *
 * sums all arguments
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list int_array;

	va_start(int_array, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(int_array, int);
	}
	va_end(int_array);
	return (sum);
}
