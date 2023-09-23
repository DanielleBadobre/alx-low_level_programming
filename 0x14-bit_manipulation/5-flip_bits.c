#include "main.h"
/**
 * flip_bits - return bit to flip
 * @n: number
 * @m: other number
 * Return: bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbit;

	for (nbit = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbit++;
	}
	return (nbit);
}
