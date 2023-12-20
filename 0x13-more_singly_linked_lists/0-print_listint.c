#include "lists.h"
/**
 * print_listint - data structure function
 * @h: current node
 *
 * prints the list of nodes
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t len = 0;
	const listint_t *current = h;

	while (current != NULL)
	{

		printf("%d\n", current->n);
		len++;
		current = current->next;
	}
	return (len);
}
