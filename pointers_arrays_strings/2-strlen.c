#include "main.h"
#include <stdio.h>
/**
 * _strlen - returns the length of a string
 * @s: pointer to the string we want to measure
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
return (i);
}
