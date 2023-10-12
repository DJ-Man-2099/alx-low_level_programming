#include "lists.h"
/**
 * get_dnodeint_at_index - dlinklist function
 * @head: start of node
 * @index: location of node
 *
 * gets node[n]
 *
 * Return: node found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	size_t current_index;

	for (current_index = 0; current != NULL; current_index++)
	{
		if (current_index == index)
		{
			return (current);
		}
		current = current->next;
	}

	return (NULL);
}
