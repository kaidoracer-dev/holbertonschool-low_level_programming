#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - Creates an array of integers
 * @min: Minimum integer value
 * @max: Maximum integer value
 *
 * Return: Pointer to the newly allocated array,
 *         or NULL if min > max or malloc fails
 */
int *array_range(int min, int max)
{
	int i, nb;

	int *ptr;

	if (min > max)
		return (NULL);

	nb = max - min + 1;

	ptr = malloc(nb * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nb; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
