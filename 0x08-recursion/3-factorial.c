#include "main.h"

/**
 * factorial - gives the factorial
 * @n: factorial o calculate
 * Return: factorial
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
