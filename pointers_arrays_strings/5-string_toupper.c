#include "main.h"
#include <stdio.h>
/**
 * string_toupper - change all lowercase letters of a string to uppercase
 * @str: the string to modify
 *
 * Return: the modified string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;

	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - ('a' - 'A');
	}
	}
	return (str);
}
