#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses the content of an integer array
 * @a: array of integers
 * @n: number of elements in the array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, j, t;

	i = 0;

	j = n - 1;

	while (i < j)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
		i++;
		j--;
	}
}
