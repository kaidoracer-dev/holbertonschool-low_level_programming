#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the first node of the list
 * @str: string to store in the new node
 *
 * Return: address of the new node, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *copy;

	if (head == NULL || str == NULL)
		return (NULL);

	copy = malloc(sizeof(list_t));
	if (copy == NULL)
	{
		return (NULL);
	}
		copy->str = strdup(str);

		if (copy->str == NULL)
		{
			free(copy);
			return (NULL);
		}
		copy->len = strlen(str);
		copy->next = *head;
		*head = copy;

	return (copy);
}
