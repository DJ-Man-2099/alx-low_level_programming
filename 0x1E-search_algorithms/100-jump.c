#include "search_algos.h"
#include <math.h>
/**
 * jump_search - search alg
 * @array: array
 * @size: size
 * @value: value
 *
 * searches for a value in an array of integers
 * using the Jump search algorithm
 *
 * Return: index of value or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, j, jump, index = -1;

	if (array != NULL)
	{
		jump = sqrt(size);
		for (i = 0; i < size; i += jump)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (i + jump >= size || array[i + jump] >= value)
			{
				printf("Value found between indexes [%lu] and [%lu]\n", i, i + jump);
				break;
			}
		}
		for (j = i; j < size; j++)
		{
			printf("Value checked array[%lu] = [%d]\n", j, array[j]);
			if (array[j] == value)
			{
				index = j;
				break;
			}
		}
	}

	return (index);
}
