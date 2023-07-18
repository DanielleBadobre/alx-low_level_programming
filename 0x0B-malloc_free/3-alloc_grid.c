#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - prints a 2d array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: a pointer to the 2d array
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **grid;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	grid = (int **) malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		*(grid + i) = (int *) malloc(width * sizeof(int));
		if (*(grid + i) == NULL)
		{
			for (j = 0; j < i; j++)
				free(*(grid + j));
			free(grid);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			*(*(grid + i) + j) = 0;
	}
	return (grid);
}
