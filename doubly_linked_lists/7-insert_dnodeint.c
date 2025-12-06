#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - inserts a new node at a given index
 * @h: pointer to pointer to head of the list
 * @idx: index where to insert (starting from 0)
 * @n: value of the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *a;

	unsigned int i;

	a = *h;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	a = *h;
	for (i = 0; a != NULL && i < idx - 1; i++)
		a = a->next;

	if (a == NULL)
		return (NULL);

	if (a->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;

	new_node->prev = a;
	new_node->next = a->next;
	a->next->prev = new_node;
	a->next = new_node;

	return (new_node);
}
