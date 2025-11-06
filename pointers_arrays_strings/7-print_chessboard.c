#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - prints a chessboard
 * @a: 2D array containing the chessboard pieces
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j;

	while (i < 8)
	{
		j = 0;

		while (j < 8)
		{
			_putchar (a[i][j]);
			j++;
		}
		i++;
		_putchar ('\n');
	}

}
