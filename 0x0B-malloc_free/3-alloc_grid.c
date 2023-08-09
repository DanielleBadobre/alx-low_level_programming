#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - 2 dimensional array of integers
 * @width: grid's width
 * @height: grid's height
 * Return: pointer to 2d array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **agrid;

	if (width < 1 || height < 1)
		return (NULL);
	agrid = (int **) malloc(height * sizeof(int *));
	if (agrid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		agrid[i] = (int *) malloc(width * sizeof(int));
		if (agrid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(agrid[j]);
			free(agrid);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			agrid[i][j] = 0;
	return (agrid);
}
