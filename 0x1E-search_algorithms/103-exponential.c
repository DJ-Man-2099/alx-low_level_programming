#include "search_algos.h"
/**
 * inner_binary_search - search alg
 * @array: array
 * @start: start
 * @end: end
 * @value: value
 *
 * recursive Binary Search
 *
 * Return: index of value or -1
 */
int inner_binary_search(int *array, size_t start, size_t end, int value)
{
	size_t index = -1, middle, i;

	if (array != NULL)
	{
		if (end <= start)
			return (index);
		printf("Searching in array: ");
		for (i = start; i < end; i++)
		{
			printf("%d", array[i]);
			if (i < end - 1)
				printf(", ");
		}
		printf("\n");
		if ((end + start) % 2 == 0)
			middle = ((end + start) / 2) - 1;
		else
			middle = ((end + start) - 1) / 2;
		if (array[middle] == value)
			index = middle;
		else
		{
			if (array[middle] > value)
			{
				start = start;
				end = middle;
			}
			else
			{
				start = middle + 1;
				end = end;
			}
			return (inner_binary_search(array, start, end, value));
		}
	}

	return (index);
}
/**
 * exponential_search - search alg
 * @array: array
 * @size: size
 * @value: value
 *
 * searches for a value in an array of integers
 * using the Exponential search algorithm
 *
 * Return: index of value or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t new_size, old_size, index = -1;

	if (array != NULL)
	{
		new_size = 1;
		while (new_size <= size && array[new_size] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", new_size, array[new_size]);
			old_size = new_size;
			new_size *= 2;
		}
		if (new_size >= size)
			new_size = size - 1;
		printf("Value found between indexes [%lu] and [%lu]\n", old_size, new_size);
		return (inner_binary_search(array, old_size, new_size + 1, value));
	}

	return (index);
}
