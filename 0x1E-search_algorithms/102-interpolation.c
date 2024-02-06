#include "search_algos.h"
/**
 * interpolation_search - search alg
 * @array: array
 * @size: size
 * @value: value
 *
 * searches for a value in an array of integers
 * using the Interpolation search algorithm
 *
 * Return: index of value or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, current, index = -1;

	if (array != NULL)
	{
		while (low <= high)
		{
			current = low + (((double)(high - low) /
							  (array[high] - array[low])) *
							 (value - array[low]));
			if (current >= size)
			{
				printf("Value checked array[%lu] is out of range\n", current);
				break;
			}
			printf("Value checked array[%lu] = [%d]\n", current,
				   array[current]);
			if (array[current] == value)
			{
				index = current;
				break;
			}
			else if (array[current] < value)
				low = current + 1;
			else
				high = current - 1;
		}
	}

	return (index);
}
