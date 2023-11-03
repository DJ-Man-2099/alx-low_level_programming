#include "hash_tables.h"
#include <stdio.h>

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode, *tempNode;
	unsigned long int index;

	if (ht == NULL)
		return (0);
	index = (hash_djb2((const unsigned char *)key) % (ht->size));
	if (key == NULL || value == NULL || (strcmp(key, "") == 0))
		return (0);
	if (ht->array[index] == NULL) /*slot is empty, put node here*/
	{
		newNode = malloc(sizeof(hash_node_t));
		if (newNode == NULL)
			return (0);
		ht->array[index] = newNode;
		newNode->key = (strdup(key));
		newNode->value = (strdup(value));
		newNode->next = NULL;
		return (1);
	}
	tempNode = ht->array[index];
	while (tempNode) /*while "head" is not NULL*/
	{
		if (strcmp(key, tempNode->key) == 0)
		{
			free(tempNode->value);
			tempNode->value = (strdup(value));
			return (1);
		}
		tempNode = tempNode->next; /*traversing*/
	}
	tempNode = ht->array[index];

	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);
	newNode->key = (strdup(key));
	newNode->value = (strdup(value));
	newNode->next = tempNode;
	ht->array[index] = newNode;
	return (1);
}
