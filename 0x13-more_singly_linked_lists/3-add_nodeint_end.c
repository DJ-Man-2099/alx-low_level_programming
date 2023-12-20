#include "lists.h"
/**
 * add_nodeint_end - data structure function
 * @head: node to add after
 * @n: string to add
 *
 * calculates the length of list
 *
 * Return: number of nodes
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_head = malloc(sizeof(listint_t)), *last = (*head);

	if (new_head == NULL)
	{
		return (NULL);
	}
	new_head->next = NULL;
	new_head->n = n;

	if ((*head) != NULL)
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new_head;
	}
	else
	{
		(*head) = new_head;
	}

	return (new_head);
}
