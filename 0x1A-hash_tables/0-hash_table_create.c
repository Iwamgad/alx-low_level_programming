#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: The size of the array.
 * Return: a pointer to the newly created hash table
 *         Otherwise Null
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashT;
	unsigned long int i;

	hashT = malloc(sizeof(hash_table_t));
	if (hashT == NULL)
		return (NULL);

	hashT->size = size;
	hashT->array = malloc(sizeof(hash_node_t *) * size);
	if (hashT->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		hashT->array[i] = NULL;

	return (hashT);
}
