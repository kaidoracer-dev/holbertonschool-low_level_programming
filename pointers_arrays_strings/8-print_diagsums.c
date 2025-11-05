#include "main.h"
#include <stdio.h>
/**
* print_diagsums - prints the sums of the two diagonals
* @a: pointer to the first element of the matrix
* @size: size of the matrix (NxN)
*/
void print_diagsums(int *a, int size)
{
	int i = 0;
	int som1 = 0;
	int som2 = 0;

	while (i < size)
	{
		som1 += a[i* size + i];
		som2 += a[i*size + (size-1-i)];
		i++;
	}
	printf("%d, %d\n", som1, som2);
}
