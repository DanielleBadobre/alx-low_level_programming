#include "main.h"
/**
 * get_endianness - verifies endianness
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int z;
	char *v;

	z = 1;
	v = (char *) &z;
	return ((int)*v);
}
