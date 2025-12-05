#include "lists.h"
#include <stdlib.h>

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