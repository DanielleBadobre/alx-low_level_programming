#include "main.h"
/**
 * get_bit - gives value of bit at index
 * @n: unsigned long int input
 * @index: index to check
 * Return: bit at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int y;

	of (n == 0 && index < 64)
		return (0);
	for (y = 0; y <= 63; n >>= 1, y++)
	{
		if (index == y)
			return (n & 1);
	}
	return (-1);
}
