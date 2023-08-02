#include "main.h"

/**
 * _sqrt_recursion - natural square root of number
 * @n: number to calculate square root of
 * Return: on failure -1, on success square root of n
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	if (n == 1 || n == 0)
		return (n);
	else
		return (guessing(n, 2));
}

/**
 * guessing - guesses the square root
 * @n: number to guess
 * @i: guess
 */

int guessing(int n, int i)
{
	if (i * i == n)
		return (i);
	else
		if (i * i > n)
			return (-1);
	else
		return (guessing(n, i + 1));	
}
