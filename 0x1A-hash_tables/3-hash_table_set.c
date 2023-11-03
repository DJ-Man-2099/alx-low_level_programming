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
	hash_node_t *new_node = NULL, *current;

	if (strlen(key) == 0 || ht == NULL ||
		ht->size == 0 || key == NULL || value == NULL)
		return (FAIL);
	index = key_index((const unsigned char *)key, size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			new_node = current;
			break;
		}
		current = current->next;
	}
	if (new_node != NULL)
	{
		free(new_node->value);
	}
	else
	{
		new_node = calloc(1, sizeof(hash_node_t));
		if (new_node == NULL)
			return (FAIL);
		new_node->key = (char *)key;
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	new_node->value = calloc(1 + strlen(value), sizeof(char));
	if (new_node->value == NULL)
		return (FAIL);
	new_node->value = strcpy(new_node->value, value);

	return (SUCCESS);
}
