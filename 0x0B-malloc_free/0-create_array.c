#include <stdlib.h>
#include "main.h"
/**
 * create_array - array function
 * @size: size of array
 * @c: the character to fill array with
 *
 * creates array of size = size,
 * and fills it with char c
 *
 * Return: pointer to array,
 * Null at error
 */
char *create_array(unsigned int size, char c)
{
	char *array = (char *)malloc(size * sizeof(char));
	unsigned int i;

	if (size <= 0)
	{
		return (NULL);
	}

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
	}

	return (array);
}
