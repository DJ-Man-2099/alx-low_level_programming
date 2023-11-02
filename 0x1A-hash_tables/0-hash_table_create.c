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

	if ((table = calloc(1, sizeof(hash_table_t))) == NULL)
		return (NULL);

	if ((array = calloc(size, sizeof(hash_node_t))) == NULL)
	{
		free(table);
		return (NULL);
	}

	table->size = size;
	table->array = array;

	return (table);
}
