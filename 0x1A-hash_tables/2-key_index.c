#include "hash_tables.h"

/**
 * key_index - The generates the key using hash_djb2
 * @key: Pointer to the key
 * @size: Size of table
 * Return: Index key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
