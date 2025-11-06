#include "main.h"
#include  <stdio.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to search in
 * @accept: the string containing characters to match
 *
 * Return: a pointer to the byte in s that matches one of the
 *         bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;
	char *j;

	while (s[i] != '\0')
	{
		j = accept;

		while (*j != '\0')
		{
			if (s[i] == *j)
			{
				return (&s[i]);

			}
		j++;
		}
	i++;
	}
	return (0);
}
