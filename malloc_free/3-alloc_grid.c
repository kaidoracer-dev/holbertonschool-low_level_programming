#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - creates a 2D array of integers initialized to 0
 * @width: number of columns
 * @height: number of rows
 *
 * Return: pointer to 2D array, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			while (i < height)
			{
				free(grid[i - 1]);
				i--;
			}
			free(grid);
				return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
