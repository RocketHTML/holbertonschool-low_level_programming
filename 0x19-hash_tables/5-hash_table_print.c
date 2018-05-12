#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *runner = NULL;
	unsigned long int idx = 0;
	char *sep = "";

	if (ht == NULL)
		return;

	printf("{");
	while (idx < ht->size)
	{
		runner = ht->array[idx];
		while (runner)
		{
			printf("%s'%s': '%s'", sep, runner->key, runner->value);
			sep = ", ";
			runner = runner->next;
		}
		idx += 1;
	}
	printf("}\n");
}
