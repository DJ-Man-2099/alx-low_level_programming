#include "lists.h"
/**
 * add_node_end - data structure function
 * @head: node to add after
 * @str: string to add
 *
 * calculates the length of list
 *
 * Return: number of nodes
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *new_str = strdup(str);
	unsigned int len = strlen(str);
	list_t *new_head = malloc(sizeof(list_t)), *last = (*head);

	if (new_head == NULL)
	{
		return (NULL);
	}
	new_head->len = len;
	new_head->next = NULL;
	new_head->str = new_str;

	if ((*head) != NULL)
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new_head;
	}
	else
	{
		(*head) = new_head;
	}

	return (new_head);
}
