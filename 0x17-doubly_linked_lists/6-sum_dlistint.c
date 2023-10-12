#include "lists.h"
/**
 * sum_dlistint - dlinklist function
 * @head: head of list
 *
 * sums the values of nodes
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	size_t count;
	int sum = 0;
	const dlistint_t *current = head;

	for (count = 0; current != NULL; count++)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
