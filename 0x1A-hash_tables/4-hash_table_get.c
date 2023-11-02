#include "hash_tables.h"
/**
 * hash_table_get - hash function
 * @ht: hash table
 * @key: key in table
 *
 * retrieves a value associated with a key.
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index, size = ht->size;
	hash_node_t *current;
	char *value = NULL;

	index = key_index((const unsigned char *)key, size);
	current = ht->array[index];

	while (current != NULL && current->key != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			value = current->value;
			break;
		}
		current = current->next;
	}
	return (value);
}
