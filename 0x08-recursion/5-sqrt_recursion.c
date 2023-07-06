#include "main.h"

/**
 * _sqrt_recursion - calculates square root of number
 * @n: number to root
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if ((n == 0) || (n == 1))
		return (n);
	else
		return (guessing(n, 1));
}
/**
 * guessing - guesses root
 * @n: root to find
 * @guess: guessed number
 * Return: hopefully the good guess
 */

int guessing(int n, int guess)
{
	if ((guess * guess) == n)
		return (guess);
	else if ((guess * guess) > n)
		return (-1);
	else
		return (guessing(n, (guess + 1)));
}
