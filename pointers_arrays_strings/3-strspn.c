#include "main.h"
#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search in
 * @accept: string containing the characters to match
 *
 * Return: number of bytes in the initial segment of s
 *         which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	char *j;

	while (s[i] != '\0')
	{
		j = accept;

		while (*j && *j != s[i])
		{
			j++;
		}

		if (*j == '\0')
			break;

		i++;
	}
	return (i);
}
