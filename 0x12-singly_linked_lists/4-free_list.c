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
		printf("still has a next\n");
		free_list(head->next);
	}
	printf("freeing head of str: %s\n", head->str);
	free(head->str);
	free(head);
}
