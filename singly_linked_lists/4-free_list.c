#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a list_t list
 * @head: pointer to the first node of the list
 */
void free_list(list_t *head)
{
	list_t *a, *copy;

	a = head;

	while (a != NULL)
	{
		copy = a->next;
		free(a->str);
		free(a);
		a = copy;
	}
}
