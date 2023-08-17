#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - variadic function
 * @separator: separator to print between numbers
 * @n: number of args
 * @...: arguments
 *
 * prints all numbers
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list int_array;

	va_start(int_array, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(int_array, int));
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(int_array);
	printf("\n");
}
