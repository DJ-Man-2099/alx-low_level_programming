#include "search_algos.h"
#include <math.h>
/**
 * linear_skip - search alg
 * @list: list
 * @value: value
 *
 * searches for a value in an array of integers
 * using the Advanced Binary search algorithm
 *
 * Return: pointer to node or NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *index = NULL, *slow_index = list;

	while (list != NULL)
	{
		slow_index = list;
		list = list->express;
		printf("Value checked at index [%lu] = [%d]\n",
			   list->index, list->n);
		if (list->n < value && list->express == NULL)
		{
			slow_index = list;
			while (list->next != NULL)
				list = list->next;
		}
		if (list->n >= value || list->next == NULL)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
				   slow_index->index, list->index);
			break;
		}
	}
	while (slow_index != NULL)
	{
		printf("Value checked at index [%lu] = [%d]\n",
			   slow_index->index, slow_index->n);
		if (slow_index->n == value)
		{
			index = slow_index;
			break;
		}
		slow_index = slow_index->next;
	}
	return (index);
}
