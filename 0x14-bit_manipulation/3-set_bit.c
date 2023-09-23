#include "main.h"
/**
 * set_bit - sets value of bit to 1
 * @n: pointer to index
 * @index: index to change
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int w;

	if (index > 63)
		return (-1);
	w = 1 << index;
	*n = (*n | w);
	return (1);
}
