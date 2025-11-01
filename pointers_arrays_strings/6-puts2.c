#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every other character of a string
 * @str: the string to print
 *
 * Description: Prints the first character, skips the next,
 * prints the next, and so on, until the end of the string.
 * Ends with a new line.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)

		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
