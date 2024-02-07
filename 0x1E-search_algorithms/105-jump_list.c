#include "search_algos.h"
#include <math.h>
/**
 * jump_list - search alg
 * @list: list
 * @size: size
 * @value: value
 *
 * searches for a value in an array of integers
 * using the Advanced Binary search algorithm
 *
 * Return: pointer to node or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *index = NULL, *slow_index = list;
	size_t jump = sqrt(size), i;

	(void)size;
	while (list != NULL)
	{
		if (list->n == value)
		{
			index = list;
			break;
		}
		for (i = 0; i < jump; i++)
		{
			if (list->next == NULL)
				break;
			list = list->next;
		}
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
		if (list->n < value && list->next != NULL)
		{
			for (i = 0; i < jump; i++)
			{
				if (slow_index->next == NULL)
					break;
				slow_index = slow_index->next;
			}
		}
		else
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
				   slow_index->index, list->index);
			break;
		}
	}

	while (slow_index != NULL)
	{
		printf("Value checked at index [%lu] = [%d]\n", slow_index->index, slow_index->n);
		if (slow_index->n == value)
		{
			index = slow_index;
			break;
		}
		slow_index = slow_index->next;
	}
	return (index);
}
