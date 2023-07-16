#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars
 * @size: size of the array
 * @c: specific char initialized
 * Return: pointer to array on success, NULL on fail
 */

char *create_array(unsigned int size, char c)
{
	char *new_array;
	unsigned int i;

	i = 0;
	if (size == 0)
		return ("NULL");
	new_array = malloc(size);
	while (i < size)
		{
			new_array[i] = c;
			i++;
		}
	return (new_array);
}
