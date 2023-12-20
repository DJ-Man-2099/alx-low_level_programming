#include "main.h"
/**
 * _strlen_recursion - pointer function.
 * @s: pointer to a string
 *
 * gets the length of the string s
 *
 * Return: length of s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
