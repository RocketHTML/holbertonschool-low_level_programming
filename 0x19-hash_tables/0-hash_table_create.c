#include "hash_tables.h"

/**
 * hash_table_create - creates hash table of length <size>
 * @size: size of the array
 * Return: pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	hash_node_t **array = NULL;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	table->array = array;
	table->size = size;

	return (table);
}
