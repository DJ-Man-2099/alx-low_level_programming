#include "lists.h"
/**
 * delete_nodeint_at_index - data structure function
 * @head: current node
 * @index: index of inserted node
 *
 * returns the nth node of a listint_t linked list
 *
 * Return: node at n
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	size_t len = 0;
	listint_t *current = *head, *new_head;

	if (head != NULL)
	{
		while (current != NULL)
		{
			if (index == 0)
			{
				new_head = (*head)->next;
				free(*head);
				*head = new_head;
				return (1);
			}
			else if (len == index - 1 && index != 0 && current->next != NULL)
			{
				new_head = current->next->next;
				free(current->next);
				current->next = new_head;
				return (1);
			}

			len++;
			current = current->next;
		}
	}
	return (-1);
}
