#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to pointer to the head of the list
 * @n: integer value to add in the new node
 *
 * Return: address of the new node, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *l;

	if (new_node == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	l = *head;
	while (l->next != NULL)
	{
		l = l->next;
	}
	l->next = new_node;
	new_node->prev = l;
	new_node->next = NULL;
	return (new_node);
}
