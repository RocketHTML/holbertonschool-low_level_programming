#include "hash_tables.h"

/**
 * hash_table_delete - delete hashtable
 * @ht: table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *runner = NULL;
	hash_node_t *tmp = NULL;
	unsigned long int idx = 0;

	if (ht == NULL)
		return;

	while (idx < ht->size)
	{
		runner = ht->array[idx];
		while (runner)
		{
			tmp = runner;
			runner = runner->next;
			free(tmp->value);
			free(tmp->key);
			free(tmp);
		}
		idx += 1;
	}

	free(ht->array);
	free(ht);
}
