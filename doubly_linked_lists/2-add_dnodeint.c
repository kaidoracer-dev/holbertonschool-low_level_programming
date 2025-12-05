#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to pointer to the head of the list
 * @n: integer value to add in the new node
 *
 * Return: address of the new node, or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *copy;

	if (head == NULL)
	{
		return (NULL);
	}

	copy = malloc(sizeof(dlistint_t));

		if (copy == NULL)
		{
			return (NULL);
		}
		copy->n = n;
		copy->prev = NULL;
		copy->next = *head;

		if (*head != NULL)
			(*head)->prev = copy;

		*head = copy;

	return (copy);
}
