#include "lists.h"
/**
 * insert_dnodeint_at_index - dlinklist function
 * @h: start of node
 * @idx: location of new node
 * @n: value of new node
 *
 * adds node at index n
 *
 * Return: node created
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *new_node;
	size_t current_index;

	for (current_index = 0;
		 current_index == 0 || current != NULL; current_index++)
	{
		if (current_index == idx)
		{
			new_node = malloc(sizeof(dlistint_t));
			if (new_node == NULL)
				return (NULL);

			new_node->n = n;
			new_node->next = current;
			if (current != NULL)
			{
				new_node->prev = current->prev;
				current->prev->next = new_node;
			}
			if (current_index == 0)
				*h = new_node;
			return (new_node);
		}
		current = current->next;
	}

	return (NULL);
}
