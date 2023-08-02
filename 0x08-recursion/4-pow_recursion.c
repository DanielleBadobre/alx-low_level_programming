#include "main.h"

/**
 * _pow_recursion - raises x to the power of y
 * @x: number to raise
 * @y: power to raise x to
 * Return: -1 on error, the value of x raised to the power of y on success
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, (y - 1)));
}
