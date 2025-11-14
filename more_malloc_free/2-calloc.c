#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array and initializes it to 0
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to allocated memory, or NULL if failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, j;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	i = nmemb * size;
	ptr = malloc(i);

	if (ptr == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
	{
		ptr[j] = 0;
	}

	return (ptr);
}
