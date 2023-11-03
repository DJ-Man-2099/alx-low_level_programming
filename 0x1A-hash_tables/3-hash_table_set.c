#include "hash_tables.h"
#include <stdio.h>
#define FAIL 0
#define SUCCESS 1
/**
 * hash_table_set - hash function
 * @ht: hash table
 * @key: key in table
 * @value: value in table
 *
 * adds an element to the hash table.
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, size = ht->size;
	hash_node_t *new_node, *current;

	if (strlen(key) == 0 || ht == NULL ||
		key == NULL || value == NULL)
		return (FAIL);
	index = (hash_djb2((const unsigned char *)key) % (ht->size));
	if (ht->array[index] == NULL) /*slot is empty, put node here*/
	{
		new_node = malloc(sizeof(hash_node_t));
		if (new_node == NULL)
			return (0);
		ht->array[index] = new_node;
		new_node->key = (strdup(key));
		new_node->value = (strdup(value));
		new_node->next = NULL;
		return (1);
	}
	current = ht->array[index];

	while (current) /*while "head" is not NULL*/
	{
		if (strcmp(key, current->key) == 0)
		{
			free(current->value);
			current->value = (strdup(value));
			return (1);
		}
		current = current->next; /*traversing*/
	}
	current = ht->array[index];

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	ht->array[index] = new_node;
	new_node->key = (strdup(key));
	new_node->value = (strdup(value));
	new_node->next = current, ht->array[index] = new_node;
	return (1);
}
