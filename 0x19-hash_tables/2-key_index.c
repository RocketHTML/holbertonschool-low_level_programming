#include "hash_tables.h"

/**
 * key_index - gives us the index of a key
 * @key: key to hash
 * @size: size of hash table
 * Return: returns index at which key/value pair is to be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
