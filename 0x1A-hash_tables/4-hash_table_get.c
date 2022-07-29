#include "hash_tables.h"

/**
 *hash_table_get - retrieves a value associated with a key
 *@ht: is the hash table you want to look into
 *@key: is the key you are looking for
 *Return: value associated with the element,
 *          or NULL if key couldn't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index;
	hash_node_t *temp;

	if (!ht || !key || !strlen(key) || !ht->array || !ht->size)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	temp = ht->array[index];
	if (temp == NULL)
		return (NULL);

	for (; temp != NULL; temp = temp->next)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
	}
	return (NULL);
}
