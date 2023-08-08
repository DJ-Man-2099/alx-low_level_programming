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
 * str_concat_temp - array function
 * @s1: string to copy
 * @s2: string to copy
 *
 * copies str to a new string
 *
 * Return: pointer to array,
 * Null at error
 */
char *str_concat_temp(char *s1, char *s2, bool is_end)
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

	array = (char *)malloc((l1 + l2 + 2) * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < l1 + l2; i++)
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
	array[l1 + l2] = '\n';
	if (is_end)
	{
		array[l1 + l2 + 1] = '\0';
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
	int i;
	char *arg, *str = "";

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 1; i < ac; i++)
	{
		arg = av[i];
		str = str_concat_temp(str, arg, i == ac - 1);
		if (str == NULL)
		{
			return (NULL);
		}
	}
	return (str);
}
