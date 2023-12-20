#include <stdlib.h>
#include "main.h"
/**
 * _strdup - array function
 * @str: string to copy
 *
 * copies str to a new string
 *
 * Return: pointer to array,
 * Null at error
 */
char *_strdup(char *str)
{
	int length = 0, i;
	char *base = str, *array;

	if (str == NULL)
	{
		return (NULL);
	}

	while (*str != '\0')
	{
		length++;
		str++;
	}

	array = (char *)malloc((length + 1) * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= length; i++)
	{
		array[i] = base[i];
	}

	return (array);
}
