#include "hash_tables.h"

/**
 * hash_table_get - get element from table
 * @ht: hash table
 * @key: key to hash
 * Return: value associated with key, or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *runner;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);

	runner = ht->array[idx];
	while (runner)
	{
		if (strcmp(runner->key, key) == 0)
			return (runner->value);
		runner = runner->next;
	}
	return (NULL);
}
