#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: Hash table
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int index;
	hash_node_t *temp, *aux;

	if (!ht || !ht->array)
		return;

	for (index = 0; index < ht->size; index++)
	{
		temp = ht->array[index];
		while (temp != NULL)
		{
			aux = temp->next;
			free(temp->value);
			free(temp->key);
			free(temp);

			temp = aux;
		}
	}
	free(ht->array);
	free(ht);
}
