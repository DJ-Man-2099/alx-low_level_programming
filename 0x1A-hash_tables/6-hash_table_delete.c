#include "hash_tables.h"
/**
 * hash_table_delete - hash function
 * @ht: hash table
 *
 * deletes a hash table.
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current_in_list, *next_in_list;
	size_t size, i;

	if (ht != NULL)
	{
		size = ht->size;
		for (i = 0; i < size; i++)
		{
			current_in_list = ht->array[i];
			while (current_in_list != NULL)
			{
				next_in_list = current_in_list->next;
				free(current_in_list->key);
				free(current_in_list->value);
				free(current_in_list);
				current_in_list = next_in_list;
			}
		}
		free(ht->array);
		free(ht);
	}
}
