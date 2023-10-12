#include "lists.h"
/**
 * dlistint_len - dlinklist function
 * @h: head of list
 *
 * counts nodes of list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;
	const dlistint_t *current = h;

	for (count = 0; current != NULL; count++)
		current = current->next;

	return (count);
}
