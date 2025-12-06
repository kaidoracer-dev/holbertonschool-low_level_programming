#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - frees a list_t list
 * @head: pointer to the first node of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *a, *copy;

	a = head;

	while (a != NULL)
	{
		copy = a->next;
		free(a);
		a = copy;
	}
}
