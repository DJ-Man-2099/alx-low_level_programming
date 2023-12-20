#include "lists.h"
/**
 * free_listint2 - data structure function
 * @head: node to free
 *
 * frees list
 *
 * Return: number of nodes
 */
void free_listint2(listint_t **head)
{
	if (head != NULL && (*head) != NULL)
	{
		if ((*head)->next != NULL)
		{
			free_listint2(&((*head)->next));
		}
		free((*head));
		*head = NULL;
	}
}
