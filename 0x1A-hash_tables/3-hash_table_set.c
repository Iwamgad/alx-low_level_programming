#include "hash_tables.h"

/**
 *create_node - create a hash node
 *@key: identifier
 *@value: value for key
 *Return: Adress of the new hash node
 */

hash_node_t *create_node(const char *key, const char *value)
{
	char *dKey, *dValue;
	hash_node_t *newNode;

	dKey = strdup(key);
	if (!dKey)
		return (NULL);

	dValue = strdup(value);

	if (!dValue)
	{
		free(dKey);
		return (NULL);
	}
	newNode = malloc(sizeof(hash_node_t));

	if (!newNode)
	{
		free(dKey);
		free(dValue);
		return (NULL);
	}

	newNode->next = NULL;
	newNode->key = dKey;
	newNode->value = dValue;
	return (newNode);
}

/**
 *hash_table_set - adds an element to the hash table.
 *@ht: hash table
 *@key: is the key
 *@value: the value associated with the key
 *Return: 1 if it succeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;
	hash_node_t *temp;
	char *dValue;

	if (!ht || !key || !value || !strlen(key) || !ht->array || !ht->size)
		return (0);

	index = key_index((unsigned char *) key, ht->size);
	for (temp = ht->array[index]; temp != NULL; temp = temp->next)
	{
		if (strcmp(temp->key, key) == 0)
		{
			dValue = strdup(value);
			if (!dValue)
				return (0);
			free(temp->value);
			temp->value = dValue;
			return (1);
		}
	}
	temp = create_node(key, value);
	if (!temp)
		return (0);

	temp->next = ht->array[index];
	ht->array[index] = temp;
	return (1);
}
