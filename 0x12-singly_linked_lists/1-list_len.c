#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: a pointer to the list
 * Return: returns the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t nodeCount = 0;

	while (h != 0)
	{
		h = h->next;
		nodeCount++;
	}
	return (nodeCount);
}
