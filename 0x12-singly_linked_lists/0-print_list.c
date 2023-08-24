#include "lists.h"
/**
 * print_list - data structure function
 * @h: current node
 *
 * prints the list of nodes
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t len = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str != NULL)
		{
			printf("[%d] %s\n", current->len, current->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		len++;
		current = current->next;
	}
	return (len);
}
