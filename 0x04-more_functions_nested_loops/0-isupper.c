#include "main.h"

/**
 * _isupper - checker function.
 * @c: the char to be checked
 *
 * check if c is upper or not
 *
 * Return: 1 if c is uppercase.
 * 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
