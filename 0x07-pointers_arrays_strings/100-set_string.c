#include "main.h"
#include <stdbool.h>
#include <stdio.h>
/**
 * set_string - string function
 * @s: pointer to string to replace
 * @to: pointer to string to replace with
 *
 * sets the value of a pointer to a char
 *
 * return: null
 */

void set_string(char **s, char *to)
{
	*s = to;
}
