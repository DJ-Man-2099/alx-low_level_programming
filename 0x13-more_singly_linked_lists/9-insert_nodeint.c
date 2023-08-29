#include "lists.h"
/**
 * insert_nodeint_at_index - data structure function
 * @head: current node
 * @idx: index of inserted node
 * @n: value of inserted node
 *
 * returns the nth node of a listint_t linked list
 *
 * Return: node at n
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t len = 0;
	listint_t *current, *new_head;

	if (head != NULL && *head != NULL)
	{
		current = *head;
		new_head = malloc(sizeof(listint_t));
		while (current != NULL)
		{
			if (idx == 0)
			{
				if (new_head == NULL)
				{
					return (NULL);
				}
				new_head->n = n;
				new_head->next = current;
				*head = new_head;
				return (new_head);
			}
			else if (len == idx - 1)
			{
				new_head = malloc(sizeof(listint_t));
				if (new_head == NULL)
				{
					return (NULL);
				}
				new_head->n = n;
				new_head->next = current->next;
				current->next = new_head;
				return (new_head);
			}
			len++;
			current = current->next;
		}
		free(new_head);
	}
	return (NULL);
}
