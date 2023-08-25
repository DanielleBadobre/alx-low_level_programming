#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory with malloc
 * @b: size to allcate
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	if ((malloc(b)) == NULL)
		exit(98);
	return (malloc(b));
}
