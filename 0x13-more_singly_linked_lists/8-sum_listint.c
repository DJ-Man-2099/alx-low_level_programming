#include "lists.h"
/**
 * sum_listint - data structure function
 * @head: current node
 *
 * returns the nth node of a listint_t linked list
 *
 * Return: node at n
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
