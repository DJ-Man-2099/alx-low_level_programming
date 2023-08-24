#include "lists.h"
/**
 * free_list - data structure function
 * @head: node to free
 *
 * frees list
 *
 * Return: number of nodes
 */
void free_list(list_t *head)
{
	if (head->next != NULL)
	{
		free_list(head->next);
	}
	free(head->str);
	free(head);
}
