#include <stdio.h>
#include "main.h"
/**
 * _isupper - function
 * @c: the character to be checked
 *
 * it checks for lowercase character
 *
 * Return: 1 if c is lowercase,
 * 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
