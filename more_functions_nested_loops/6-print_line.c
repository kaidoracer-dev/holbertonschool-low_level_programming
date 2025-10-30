#include "main.h"
/**
 * print_line - Print a line
 *
 * @n: The size of the line
 *
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < n; i++)
	{		
		_putchar('_');
	}
	_putchar('\n');
}
