#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars and initializes it with a char
 * @size: size of the array to create
 * @c: character used to initialize the array
 *
 * Return: pointer to the array, or NULL if it fails or size is 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ptr = malloc(size);

	if (size == 0)
		return (NULL);

	if (ptr == NULL)
		return (NULL);

	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
