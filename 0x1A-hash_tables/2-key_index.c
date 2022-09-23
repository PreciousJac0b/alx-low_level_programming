#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * key_index - returns the index of a key
 * @key: key whose index should be returned
 * @size: size of the array of hash table
 *
 * Return: index of the key parameter
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
