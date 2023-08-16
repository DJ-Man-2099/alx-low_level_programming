#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - func pointer function
 * @array: array to edit
 * @size: size of array
 * @cmp: function to compare with
 *
 * searchs for an integer,
 * using cmp
 *
 * Return: the number
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (size <= 0)
	{
		return (-1);
	}

	if (cmp != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			result = cmp(array[i]);
			if (result)
			{
				return (i);
			}
		}
	}
	return (-1);
}
