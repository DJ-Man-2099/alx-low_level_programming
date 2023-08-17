#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * print_value - variadic function
 * @string_array: string
 * @format: format of string
 *
 * gets the required argument
 *
 * Return: void *
 */
void print_value(va_list lists, char format)
{
	char *string;

	switch (format)
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
}
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
	va_list string_array;

	va_start(string_array, format);
	if (format != NULL)
	{
		while (!(format[i] == 'c' || format[i] == 'i'
		|| format[i] == 'f' || format[i] == 's'))
		{
			i++;
		}
		print_value(string_array, format[i]);
		i++;
		while (format[i] != '\0')
		{
			switch (format[i])
			{
			case 'c':
			case 'i':
			case 'f':
			case 's':
				printf(", ");
				print_value(string_array, format[i]);
				break;

			default:
				break;
			}
			i++;
		}
	}
	va_end(string_array);
	printf("\n");
}
