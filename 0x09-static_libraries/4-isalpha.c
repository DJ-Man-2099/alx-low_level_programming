#include <stdio.h>
#include "main.h"
/**
 * _isalpha - function
 * @c: the character to be checked
 * it checks for alphabetic character
 *
 * Return: Always 1 if c is a letter,
 * lowercase or uppercase
 * 0 otherwise
 */
int _isalpha(int c)
{
if (c >= 'A' && c <= 'z')
	return (1);
return (0);
}
