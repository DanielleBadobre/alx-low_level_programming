#include "main.h"
/**
 * array_range - creates array of int
 * @min: first value of the array
 * @max: last value of the array
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	unsigned int nmenb = (max - min) + 1;
	unsigned int i = 0;
	int *int_array;

	if (min > max)
		return (NULL);
	int_array = malloc(nmenb * sizeof(int));
	if (int_array == NULL)
		return (NULL);
	while (i < nmenb)
	{
		int_array[i++] = min++;
	}
	return (int_array);
}
