#include "search_algos.h"
/**
 * linear_search - search alg
 * @array: array
 * @size: size
 * @value: value
 *
 * searches for a value in an array of integers
 * using the Linear search algorithm
 *
 * Return: index of value or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index = -1, i;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				index = i;
				break;
			}
		}
	}

	return (index);
}
