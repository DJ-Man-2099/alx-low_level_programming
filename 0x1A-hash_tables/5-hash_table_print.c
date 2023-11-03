#include "hash_tables.h"
#include <stdio.h>
#include <stdbool.h>
/**
 * hash_table_print - hash function
 * @ht: hash table
 *
 * prints a hash table.
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current_in_list;
	size_t size, i;
	bool has_written = false;

	if (ht != NULL && ht->array != NULL)
	{
		printf("{");
		size = ht->size;
		for (i = 0; i < size; i++)
		{
			current_in_list = ht->array[i];
			while (current_in_list != NULL)
			{
				printf("'%s': '%s'", current_in_list->key, current_in_list->value);
				has_written = true;
				if (current_in_list->next != NULL)
					printf(", ");
				current_in_list = current_in_list->next;
			}
			if (has_written && i < size - 1 && ht->array[i + 1] != NULL)
				printf(", ");
		}
		printf("}\n");
	}
}
