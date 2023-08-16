#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - func pointer function
 * @name: string to print
 * @f: function to use to print
 *
 * calls f(name)
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
