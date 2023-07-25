#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmenb: number of ellements
 * @size: number of bytes
 * Return: NULL or memore
 */

void *_calloc(unsigned int nmenb, unsigned int size)
{
	unsigned int i;
	char *newArray;

	if (nmenb == 0 || size == 0)
		return (NULL);
	newArray = malloc(nmenb * size);
	if (newArray == NULL)
		return (NULL);
	for (i = 0; i < (nmenb * size); i++)
		newArray[i] = 0;
	return (newArray);
	free(newArray);
}
