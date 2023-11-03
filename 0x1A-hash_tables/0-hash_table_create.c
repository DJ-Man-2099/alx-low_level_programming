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
	hash_table_t *table = calloc(1, sizeof(hash_table_t));
	hash_node_t **array = calloc(size, sizeof(hash_node_t));
	size_t i = 0;

	if (table == NULL || array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = NULL;

	table->size = size;
	table->array = array;

	return (table);
}
