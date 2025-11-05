#include "main.h"
#include <stdio.h>
/**
* print_chessboard - that prints the chessboard
* @a: pointer to an 8x8 array of characters
* @i: the ligne of array
* @j: the colonne of array
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
