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
	return (l1);
}
/**
 * str_concat - array function
 * @s1: string to copy
 * @s2: string to copy
 *
 * copies str to a new string
 *
 * Return: pointer to array,
 * Null at error
 */
char *str_concat(char *s1, char *s2)
{
	int l1, l2, i;
	char *b1 = s1, *b2 = s2, *array;

	if (b1 == NULL)
	{
		b1 = "";
	}
	if (b2 == NULL)
	{
		b2 = "";
	}

	l1 = get_length(s1);

	l2 = get_length(s2);

	array = (char *)malloc((l1 + l2 + 1) * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= l1 + l2; i++)
	{
		if (i < l1)
		{
			array[i] = b1[i];
		}
		else
		{
			array[i] = b2[i - l1];
		}
	}

	return (array);
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
	int i, length;
	char *arg, *str = "";

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		str = str_concat(str, arg);
		if (str == NULL)
		{
			return (NULL);
		}
		length = get_length(str);
		str[length] = '\n';
		str[length + 1] = '\0';
	}
	str = str_concat(str, "");
	return (str);
}
