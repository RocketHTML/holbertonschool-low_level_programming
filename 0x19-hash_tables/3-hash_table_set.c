#include "hash_tables.h"

/**
 * hash_table_set - adds element to the hash table
 * @ht: hash table to add to
 * @key: key to hash
 * @value: value to insert
 * Return: 1 for succhess, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = NULL;
	unsigned long int idx;
	hash_node_t *runner = NULL;

	if (ht == NULL || ht->size == 0 || key == NULL || strlen(key) == 0)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);


	runner = ht->array[idx];
	while (runner)
	{
		if (strcmp(runner->value, value) == 0)
		{
			free(runner->value);
			runner->value = strdup(value);
			return (1);
		}
		runner = runner->next;
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[idx];
	ht->array[idx] = node;
	return (1);
}
