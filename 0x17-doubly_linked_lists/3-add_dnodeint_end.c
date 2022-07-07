#include "lists.h"

/**
 * add_dnodeint_end - adds a newnode at the end of a dlistint_t list
 * @head: first element
 * @n: number
 * Return: newnode node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *tmp;

	newnode = NULL;
	tmp = *head;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		newnode->prev = tmp;
		tmp->next = newnode;
	}
	return (newnode);
}
