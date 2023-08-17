#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * get_value - variadic function
 * @format: type of argument
 * @string_array: arguments
 *
 * gets the required argument
 *
 * Return: void *
 */
void *get_value(char const format, void *string)
{
	if (format == 's' && string == NULL)
	{
		string = "(nil)";
	}
	return (string);
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
	char temp_format[] = "%c";

	va_start(string_array, format);

	while (!(format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
	{
		printf("%c", format[i]);
		i++;
	}
	sprintf(temp_format, "%%%c", format[i]);
	printf(temp_format, get_value(format[i], va_arg(string_array, void *)));
	/* printf(temp_format, 'A'); */
	i++;
	while (format[i] != '\0')
	{
		if (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's')
		{
			printf(", ");
			sprintf(temp_format, "%%%c", format[i]);
			printf(temp_format, get_value(format[i], va_arg(string_array, void *)));
		}
		i++;
	}
	va_end(string_array);
	printf("\n");
}
