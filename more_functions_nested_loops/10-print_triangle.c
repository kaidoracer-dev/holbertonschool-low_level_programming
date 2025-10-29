#include "main.h"
/**
 * print_triangle - Print a triangle
 *
 * @size: The size of the square
 *
 */
void print_triangle(int size)
{
	int i, j, h;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
				_putchar(' ');
			for (h = 0; h < i; h++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
