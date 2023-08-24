#include "lists.h"
/**
 * add_node - data structure function
 * @head: node to add before
 * @str: string to add
 *
 * calculates the length of list
 *
 * Return: number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	char *new_str = strdup(str);
	unsigned int len = strlen(str);
	list_t *new_head = malloc(sizeof(list_t));

	if (new_head == NULL)
	{
		return (NULL);
	}
	new_head->len = len;
	new_head->next = *head;
	new_head->str = new_str;

	*head = new_head;

	return (new_head);
}
