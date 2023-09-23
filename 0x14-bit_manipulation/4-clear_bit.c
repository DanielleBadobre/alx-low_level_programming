#include "main.h"
/**
 * clear_bit - puts bit to 0
 * @n: pointer to bit
 * @index: index of bit
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int w;

	if (index > 63)
		return (-1);
	w = 1 << index;
	if (*n & w)
		*n ^= w;
	return (1);
}
