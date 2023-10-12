#include "lists.h"
/**
 * add_dnodeint - dlinklist function
 * @head: node to add before
 * @n: value at new node
 *
 * adds node to start of list
 *
 * Return: node added
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (*head != NULL)
	{
		new_node->prev = (*head)->prev;
		new_node->next = *head;
		(*head)->prev = new_node;
	}
	(*head) = new_node;

	return (new_node);
}
