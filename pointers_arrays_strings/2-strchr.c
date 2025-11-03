#include "main.h"
#include "stdio.h"
/**
* _strchr - Locates a character in a string
* @s: The string
* @c: The character
* Return: Adresse of the character
* Return: Zero
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
		
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
