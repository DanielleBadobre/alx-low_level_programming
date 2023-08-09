#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: character to initialize the array with
 * Return: NULL or a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;

	if (size == 0)
		return (0);
	array = malloc(size);
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
	free(array);
}
