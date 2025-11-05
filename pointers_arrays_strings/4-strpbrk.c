#include "main.h"
#include  <stdio.h>
/**
* _strpbrk - searches a string for any of a set of bytes
*@i: path the character chain s
*@j: path the character chain accept
* return the address of s
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
