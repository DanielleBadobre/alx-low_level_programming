#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates memory block
 * @ptr: pointer to memory
 * @old_size: size of ptr
 * @new_size: size of new memory block
 * Return: pointer to new space
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *reallocated, *ptr_cast;

	ptr_cast = ptr;
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	reallocated = malloc(new_size);
	if (reallocated == NULL)
		return (NULL);
	for (i = 0; i < old_size; i++)
		reallocated[i] = ptr_cast[i];
	free(ptr);
	return (reallocated);
	free(reallocated);
}
