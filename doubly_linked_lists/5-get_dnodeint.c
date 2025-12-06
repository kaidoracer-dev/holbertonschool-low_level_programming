#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list
 * @head: head of the list
 * @index: index to get
 * Return: pointer to the node, or NULL if not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *a;

	unsigned int i = 0;

	a = head;

	while (a != NULL)
	{
		if (i == index)
			return (a);

		a = a->next;
		i++;
	}
	return (NULL);
}
