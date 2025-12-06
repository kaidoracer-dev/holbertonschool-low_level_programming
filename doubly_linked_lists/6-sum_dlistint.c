#include "lists.h"
#include <stdlib.h>
/**
 * sum_dlistint - returns the sum of all n in a dlistint_t list
 * @head: head of the list
 * Return: sum of all n, or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *a;

	int sum = 0;

	a = head;

	while (a != NULL)
	{
		sum += a->n;
		a = a->next;
	}
	return (sum);
}
