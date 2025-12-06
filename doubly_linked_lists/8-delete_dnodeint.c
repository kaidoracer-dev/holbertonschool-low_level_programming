#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - deletes the node at a given index
 * @head: pointer to pointer to the head of the list
 * @index: index of the node to delete (starts at 0)
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *a;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	a = *head;

	if (index == 0)
	{
		*head = a->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(a);
		return (1);
	}

	for (i = 0; a != NULL && i < index; i++)
		a = a->next;

	if (a == NULL)
		return (-1);

	if (a->prev != NULL)
		a->prev->next = a->next;
	if (a->next != NULL)
		a->next->prev = a->prev;

	free(a);
	return (1);
}
