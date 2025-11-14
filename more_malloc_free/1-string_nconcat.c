#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - Concatenates two strings into a newly allocated space
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes from s2 to concatenate
 *
 * Return: Pointer to the new string, or NULL if malloc fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, nb, i, j;
	char *r;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		nb = len2;
	else
		nb = n;

	r = malloc(len1 + nb + 1);
	if (r == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		r[i] = s1[i];

	for (j = 0; j < nb; j++)
		r[i + j] = s2[j];

	r[i + j] = '\0';

	return (r);
}
