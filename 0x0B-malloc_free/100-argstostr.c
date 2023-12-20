#include <stdlib.h>
#include <stdbool.h>
#include "main.h"
/**
 * get_length - array function
 * @s1: string to copy
 *
 * gets length of string
 *
 * Return: length of s1
 */
int get_length(char *s1)
{
	int l1 = 0;

	if (s1 != NULL)
	{
		while (*s1 != '\0')
		{
			l1++;
			s1++;
		}
	}
	return (l1 + 1);
}
/**
 * argstostr - array function
 * @ac: number of arguments
 * @av: arguments
 *
 * frees a 2d array
 *
 * Return: void
 */
char *argstostr(int ac, char **av)
{
	int i, length = 0;
	char *arg, *str, *base;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		length += get_length(arg);
	}
	str = (char *)malloc(length * sizeof(char) + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	base = str;
	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		while (*arg != '\0')
		{
			*str = *arg;
			str++;
			arg++;
		}
		*str = '\n';
		str++;
	}
	*str = '\0';
	return (base);
}
