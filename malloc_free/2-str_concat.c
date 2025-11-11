#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated space containing s1 + s2,
 * or NULL if memory allocation fails
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
	}

	while (s2[j] != '\0')
	{
		j++;
	}

	str = malloc(i + j + 1);

	if (str == NULL)
		return (NULL);

	while (k < i)
	{
		str[k] = s1[k];
		k++;
	}

	k = 0;

	while (k < j)
	{
		str[i + k] = s2[k];
		k++;
	}

	str[i + j] = '\0';

	return (str);
}
