#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_strings - variadic function
 * @separator: separator to print between strings
 * @n: number of args
 * @...: arguments
 *
 * prints all strings
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list string_array;
	char *temp;

	va_start(string_array, n);

	for (i = 0; i < n; i++)
	{
		temp = va_arg(string_array, char *);
		printf("%s", temp != NULL ? temp : "(nil)");
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(string_array);
	printf("\n");
}
