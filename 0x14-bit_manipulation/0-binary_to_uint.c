#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui = 0;
	int le, base_tw;

	if (!b)
		return (0);
	for (le = 0; b[le] != '\0'; le++)
		;
	for (le--, base_tw = 1; le >= 0; le--, base_tw *= 2)
	{
		if (b[le] != '0' && b[le] != '1')
			return (0);
		if (b[le] & 1)
			ui += base_tw;
	}
	return (ui);

}
