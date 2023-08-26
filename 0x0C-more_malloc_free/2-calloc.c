#include "main.h"
/**
 * _calloc - allocates memory for an array
 * @nmenb: number of elements
 * @size: size of each elements
 * Return: a pointer to allocated memory
 */
void *_calloc(unsigned int nmenb, unsigned int size)
{
	unsigned int i = 0;
	char *empty_array;
	unsigned int array_size = size * nmenb;

	if (nmenb == 0 || size == 0)
		return (NULL);
	empty_array = malloc(array_size);
	if (empty_array == NULL)
		return (NULL);
	while (i < array_size)
	{
		empty_array[i] = 0;
		i++;
	}
	return (empty_array);
}
