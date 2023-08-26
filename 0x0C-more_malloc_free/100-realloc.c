#include "main.h"
#include <stdio.h>
/**
 * _realloc - reallo mem space
 * @ptr: pointer to old array
 * @old_size: size of ptr
 * @new_size: size of new_array
 * Return: pointer to new array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *reallocated, *ptrCast;

	ptrCast = ptr;
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
		reallocated[i] = ptrCast[i];
	free(ptr);
	return (reallocated);
}
