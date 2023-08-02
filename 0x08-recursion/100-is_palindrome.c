#include "main.h"

/**
 * get_end - pointer function.
 * @s: the pointer to string
 *
 * returns the end of string
 *
 * Return: end of string
 */
char *get_end(char *s)
{
	if (*s == '\0')
	{
		return (s - 1);
	}
	return (get_end(s + 1));
}
/**
 * _temp_palindrome - pointer function.
 * @start: the pointer to left char
 * @end: the pointer to right char
 *
 * checks if start == end
 *
 * Return: 1 if start == end
 * 0 if not
 */
int _temp_palindrome(char *start, char *end)
{
	if (*start == *end)
	{
		if (start >= end)
		{
			return (1);
		}
		return (_temp_palindrome(start + 1, end - 1));
	}
	else
	{
		return (0);
	}
}
/**
 * is_palindrome - recursion function.
 * @s: pointer to string to check
 *
 * checks if s is a palindrome
 *
 * Return: 0 if not-palindrome
 * 1 if palindrome
 */
int is_palindrome(char *s)
{
	if (*s == '\0' || *(s + 1) == '\0')
		return (0);
	return (_temp_palindrome(s, get_end(s)));
}
