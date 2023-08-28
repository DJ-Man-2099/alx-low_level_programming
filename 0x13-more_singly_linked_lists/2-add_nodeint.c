#include "lists.h"
/**
 * add_nodeint - data structure function
 * @head: node to add before
 * @n: int to add
 *
 * calculates the length of list
 *
 * Return: number of nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head = malloc(sizeof(listint_t));

	if (new_head == NULL)
	{
		return (NULL);
	}
	new_head->next = *head;
	new_head->n = n;

	*head = new_head;

	return (new_head);
}
