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
	if (ht->array[index]->value != NULL &&
		strcmp(ht->array[index]->key, key) != 0)
	{
		new_node = calloc(1, sizeof(hash_node_t));
		new_node->next = calloc(1, sizeof(hash_node_t));
		new_node->value = calloc(1 + strlen(value), sizeof(char));
		if (new_node == NULL ||
			new_node->next == NULL ||
			new_node->value == NULL)
			return (0);
		new_node->key = (char *)key;
		new_node->value = strcpy(new_node->value, value);
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
		ht->size++;
	}
	else
	{
		ht->array[index] = calloc(1, sizeof(hash_node_t));
		if (ht->array[index] == NULL)
			return (0);
		ht->array[index]->key = (char *)key;
		ht->array[index]->value = calloc(1 + strlen(value), sizeof(char));
		if (ht->array[index]->value == NULL)
			return (0);
		ht->array[index]->value = strcpy(ht->array[index]->value, value);
		ht->array[index]->next = NULL;
	}
	return (1);
}
