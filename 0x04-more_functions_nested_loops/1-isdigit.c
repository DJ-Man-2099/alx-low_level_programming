#include "main.h"

/**
 * _isdigit - checker function.
 * @c: the char to be checked
 *
 * check if c is a digit or not
 *
 * Return: 1 if c is a digit.
 * 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
