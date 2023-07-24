#include "main.h"
#include <stdio.h>
/**
 * reverse - temp function.
 * @orig: pointer to a string
 * @rev: pointer to a string
 *
 * reverses a string through recursion
 *
 * Return: void
 */
void reverse(char **orig, char *rev)
{
	char *next_rev, temp, current;

	if (*rev != '\0')
	{
		(next_rev) = (rev) + 1;

		current = *rev;

		reverse(orig, next_rev);

		temp = **orig;
		**orig = current;
		current = temp;
		(*orig)++;
	}
}
/**
 * rev_string - pointer function.
 * @s: pointer to a string
 *
 * reverses a string
 *
 * Return: void
 */
void rev_string(char *s)
{
	char *temp;

	temp = s;
	reverse(&s, temp);
}
