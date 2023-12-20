#include "lists.h"
/**
 * get_nodeint_at_index - data structure function
 * @head: current node
 * @index: index of required node
 *
 * returns the nth node of a listint_t linked list
 *
 * Return: node at n
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t len = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (len == index)
		{
			return (current);
		}
		len++;
		current = current->next;
	}
	return (NULL);
}
