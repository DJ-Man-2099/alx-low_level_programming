#include "lists.h"
/**
 * delete_dnodeint_at_index - dlinklist function
 * @head: start of node
 * @index: location of node to delete
 *
 * deletes node at index n
 * cases:
 * 1. delete at middle (done)
 * 2. delete at start (done)
 * 3. delete at empty (done)
 * 4. delete at end (done)
 *
 * Return: 1 on Success
 * -1 on Fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	size_t current_index;

	for (current_index = 0; current != NULL; current_index++)
	{
		if (current_index == index)
		{
			if (current->prev != NULL)
				current->prev->next = current->next;
			if (current->next != NULL)
				current->next->prev = current->prev;
			if (index == 0)
				*head = current->next;
			free(current);
			return (1);
		}
		current = current->next;
	}

	return (-1);
}
