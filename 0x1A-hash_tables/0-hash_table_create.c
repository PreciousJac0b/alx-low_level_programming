#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table created
 *
 * Return: NUll if error, a pointer to the hashtable
 * on success
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table;
	unsigned int i;

	new_hash_table = malloc(sizeof(hash_table_t));
	if (!new_hash_table)
		return (NULL);

	new_hash_table->size = size;
	new_hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!new_hash_table->array)
		return (NULL);
	while (i < size)
	{
		new_hash_table->array[i] = NULL;
		i++;
	}

	return (new_hash_table);
}
