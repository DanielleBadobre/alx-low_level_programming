#include "function_pointers.h"
/**
 * array_iterator - executes a function given as parameter on an array
 * @array: the array on whose elements the function is passed
 * @size: the size of the array
 * @action: function to execute
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array != NULL && action != NULL)
	for (i = 0; i < size; i++)
		action(array[i]);
}
