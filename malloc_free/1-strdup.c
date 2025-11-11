#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated copy of a string
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if str is NULL
 *         or if memory allocation fails
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	unsigned int j = 0;
	char *strr;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		i++;
	}

	strr = malloc(i + 1);

	if (strr == NULL)
		return (NULL);

	while (str[j] != '\0')
	{
		strr[j] = str[j];

		j++;
	}
	strr[j] = '\0';
	return (strr);
}
