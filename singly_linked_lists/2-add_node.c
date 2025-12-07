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
	char *dup;

	if (head == NULL)
		return (NULL);

	copy = malloc(sizeof(list_t));
	if (copy == NULL)
	{
		return (NULL);
	}

	if (str != NULL)
	{
		dup = strdup(str);
		if (dup == NULL)
		{
			free(copy);
			return (NULL);
		}
		copy->str = dup;
		copy->len = strlen(dup);

	}
	else
	{
		copy->str = NULL;
		copy->len = 0;
	}

	copy->next = *head;
	*head = copy;

	return (copy);
}
