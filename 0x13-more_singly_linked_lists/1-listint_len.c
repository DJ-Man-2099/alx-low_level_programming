#include "lists.h"
/**
 * listint_len - data structure function
 * @h: current node
 *
 * calculates the length of list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		len++;
		current = current->next;
	}
	return (len);
}
