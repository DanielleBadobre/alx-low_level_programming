#include "main.h"

/**
 * factorial - return factorial of n
 * @n: factorial of n
 * Return: -1 on error, factorial of n on success
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
