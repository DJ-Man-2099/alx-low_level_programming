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
	int size = end - start;

	if (array != NULL && size > 0)
	{
		printf("Searching in array: ");
		for (i = start; i < end; i++)
		{
			printf("%d", array[i]);
			if (i < end - 1)
				printf(", ");
		}
		printf("\n");
		if (size % 2 == 0)
			middle = (size / 2) - 1;
		else
			middle = (size - 1) / 2;
		middle += start;
		if (array[middle] == value)
			index = middle;
		else if (array[middle] > value)
			return (inner_binary_search(array, 0, middle, value));
		else
			return (inner_binary_search(array, middle + 1, size, value));
	}

	return (index);
}
/**
 * binary_search - search alg
 * @array: array
 * @size: size
 * @value: value
 *
 * searches for a value in an array of integers
 * using the Binary search algorithm
 *
 * Return: index of value or -1
 */
int binary_search(int *array, size_t size, int value)
{
	return (inner_binary_search(array, 0, size, value));
}
