#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: array to look in
 * @size: size of array
 * @cmp: pointer to function to be used to compare values
 * Return: index of first element for which cmp does not return o,
 * or -1 if no elemnt matches or size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (!array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
