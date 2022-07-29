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

	hashT = malloc(sizeof(hash_table_t));
	if (hashT == NULL)
		return (NULL);

	hashT->size = size;
	/*Memory allocation for the array*/
	hashT->array = malloc(sizeof(hash_node_t *) * size);
	if (hashT->array == NULL)
	{
		free(hashT->array);
		return (NULL);
	}
	return (hashT);
}
