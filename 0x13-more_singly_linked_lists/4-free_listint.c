#include "lists.h"
/**
 * free_listint - data structure function
 * @head: node to free
 *
 * frees list
 *
 * Return: number of nodes
 */
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
		{
			free_listint(head->next);
		}
		free(head);
	}
}
