#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * print_all - variadic function
 * @format: list of types of arguments passed to the function
 * @...: arguments
 *
 * prints all arguments
 *
 * Return: void
 */
void print_all(const char *const format, ...)
{
	unsigned int i = 0;
	va_list lists;
	char *string;

	va_start(lists, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", (char)va_arg(lists, int));
			break;
		case 'i':
			printf("%d", va_arg(lists, int));
			break;
		case 'f':
			printf("%f", va_arg(lists, double));
			break;
		case 's':
			string = va_arg(lists, char *);
			if (string == NULL)
			{
				string = "(nil)";
			}
			printf("%s", string);
			break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
			 format[i] == 's') &&
			format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(lists);
}
