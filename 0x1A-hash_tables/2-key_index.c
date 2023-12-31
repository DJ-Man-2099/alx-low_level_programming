#include "hash_tables.h"
/**
 * key_index - hash function
 * @key: string index
 * @size: size of table
 *
 * gets the index of key
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
