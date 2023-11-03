#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");
	hash_table_set(ht, "joyful", "test_1");
	hash_table_set(ht, "joyful", "test_3");
	hash_table_set(ht, "synaphea", "test_2");
	hash_table_set(ht, "joyful", "test_5");
	printf("key: %s, value: %s\n", "synaphea", ht->array[key_index((const unsigned char *)"synaphea", 1024)]->value);
	printf("key: %s, value: %s\n", "joyful", ht->array[key_index((const unsigned char *)"joyful", 1024)]->value);
	return (EXIT_SUCCESS);
}
