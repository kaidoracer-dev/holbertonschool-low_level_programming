#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string in reverse
 * @s: the string to print
 *
 * Prints the characters of a string in reverse order,
 * followed by a newline.
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')

		i++;

	i--;

	while ( >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
