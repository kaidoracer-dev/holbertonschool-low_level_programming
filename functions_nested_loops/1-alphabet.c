#include <stdio.h>
#include "main.h"
/**
 * prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char n = 'a';

	for (; n <= 'z'; n++)

		_putchar(n);

	_putchar('\n');

}
