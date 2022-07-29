#include "hash_tables.h"

/**
 *hash_table_print - prints a hash table.
 *@ht: hash table to be printed out
 *Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int index, end;
	hash_node_t *temp;

	if (!ht)
		return;
	printf("{");
	for (index = 0, end = 1; index < ht->size; index++)
	{
		for (temp = ht->array[index]; temp != NULL; temp = temp->next)
		{
			printf("%s'%s': '%s'", end == 1 ? "" : ",", temp->key,
			       temp->value);
			end = 0;
		}
	}
	printf("}\n");
}
