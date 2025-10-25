#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints the lowercase alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	char n = 'a';
	int i = '0';

	for (i = 0; i < 10; i++)  	
	{
		for (; n <= 'z'; n++);

		_putchar(n);
	}

	_putchar('\n');

}
