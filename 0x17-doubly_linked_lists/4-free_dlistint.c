#include "lists.h"
/**
 * free_dlistint - dlinklist function
 * @head: start of node
 *
 * frees list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head, *next_current = head;

	while (current != NULL)
	{
		next_current = current->next;
		free(current);
		current = next_current;
	}
}
