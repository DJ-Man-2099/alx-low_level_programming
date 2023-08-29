#include "lists.h"
/**
 * pop_listint - data structure function
 * @head: node to add before
 *
 * deletes the head node of a listint_t linked list
 * and returns the head node’s data (n)
 *
 * Return: n
 */
int pop_listint(listint_t **head)
{
	int old_head_int;
	listint_t *new_head;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	old_head_int = (*head)->n;
	new_head = (*head)->next;
	free(*head);
	*head = new_head;
	return (old_head_int);
}
