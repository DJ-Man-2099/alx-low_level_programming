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

	if (key == NULL || value == NULL || (strcmp(key, "") == 0))
		return (FAIL);
	index = key_index((const unsigned char *)key, size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (current->key != NULL &&
			strcmp(current->key, key) == 0)
		{
			new_node = current;
			free(new_node->value);
			break;
		}
		current = current->next;
	}
	if (new_node == NULL)
	{
		new_node = calloc(1, sizeof(hash_node_t));
		if (new_node == NULL)
			return (FAIL);
		new_node->key = strdup(key);
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	new_node->value = strdup(value);

	return (SUCCESS);
}
