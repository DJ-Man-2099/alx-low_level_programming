#include "lists.h"
/**
 * list_len - data structure function
 * @h: current node
 *
 * calculates the length of list
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		len++;
		current = current->next;
	}
	return (len);
}
