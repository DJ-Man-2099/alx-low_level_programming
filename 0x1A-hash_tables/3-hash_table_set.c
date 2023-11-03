#include "hash_tables.h"
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
	hash_node_t *new_node;

	index = key_index((const unsigned char *)key, size);

	new_node = calloc(1, sizeof(hash_node_t));
	new_node->value = calloc(1 + strlen(value), sizeof(char));
	if (new_node == NULL ||
		new_node->value == NULL)
		return (0);
	new_node->key = (char *)key;
	new_node->value = strcpy(new_node->value, value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
