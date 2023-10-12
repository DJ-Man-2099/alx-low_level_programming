#include "lists.h"
/**
 * add_dnodeint_end - dlinklist function
 * @head: node to add after
 * @n: value at new node
 *
 * adds node to end of list
 *
 * Return: node added
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *current = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (*head != NULL)
	{
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
		new_node->prev = current;
	}
	else
		(*head) = new_node;

	return (new_node);
}
