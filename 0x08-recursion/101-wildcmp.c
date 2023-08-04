#include "main.h"
#include <stdio.h>
/**
 * wildcmp - recursion function.
 * @s1: pointer to first string to compare
 * @s2: pointer to second string to compare
 *
 * checks if s1 == s2
 *
 * Return: 0 if not-equal
 * 1 if equal
 */
int wildcmp(char *s1, char *s2)
{
	printf("c1: %c, c2: %c, c1+1:%c, c2+1:%c\n", *s1, *s2, *(s1 + 1), *(s2 + 1));
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		else
		{
			if (*s1 == '\0')
			{
				if (*(s1 - 1) != *(s2 - 1) && *(s2 - 1) != '*')
				{
					return (0);
				}
				return (1);
			}
			if (*s1 == *(s2 + 1))
			{
				return (wildcmp(s1 + 1, s2 + 2));
			}
			if (*(s1 + 1) == *(s2 + 1))
			{
				return (wildcmp(s1 + 1, s2 + 1));
			}
			return (wildcmp(s1 + 1, s2));
		}
	}
	else if (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (1);
		}
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
