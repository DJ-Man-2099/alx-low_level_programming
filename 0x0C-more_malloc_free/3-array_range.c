#include <stdlib.h>
#include "main.h"
/**
 * array_range - memory function
 * @min: min value in array
 * @max: max value in array
 *
 * creates array consists of [min, max],
 *
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *ptr, length, i;

	if (min > max)
	{
		return (NULL);
	}

	length = max - min + 1;

	ptr = malloc(length * sizeof(*ptr));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		ptr[i] = i + min;
	}

	return (ptr);
}
