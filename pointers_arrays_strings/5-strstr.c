#include "main.h"
#include <stdio.h>
/**
 * _strstr - that locates a substring
 * @haystack: string to search in
 * @needle: substring to search for
 * Return: pointer to beginning of substring
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i;
	unsigned int j;

	if (*needle == '\0')
		return haystack;
	
	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;

		while (needle[j] != '\0')
		{
			j++;

			if (haystack[i + j] != needle[j])
			break;
		}

		if (needle[j] == '\0')
		return (haystack + i);
		i++;
	}
	return (0);
}