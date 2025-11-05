#include "main.h"
#include <stdio.h>
/**
* _strspn - gets the length of a prefix substring
*@i: count the number of characters
*@j: path the character chain
* return the number of characters in the substring
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
	return i;
}
