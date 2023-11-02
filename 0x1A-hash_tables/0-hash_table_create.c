#include "hash_tables.h"
/**
 * hash_table_create - hash function
 * @size: size of the array
 *
 * creates a hash table.
 * Return: pointer to table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **array;
	size_t i;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	array = malloc(size * sizeof(hash_node_t));
	if (table == NULL || array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = malloc(sizeof(hash_node_t));
		array[i]->next = malloc(sizeof(hash_node_t));
		if (array[i] == NULL || array[i]->next == NULL)
			return (NULL);
		array[i]->next = NULL;
		array[i]->key = NULL;
		array[i]->value = NULL;
	}

	table->size = size;
	table->array = array;

	return (table);
}
