#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: number to check
 * Return: 1 if is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else if (n == 2)
		return (1);
	else
		return (multiple(n, 2));
}

/**
 * multiple - looks for multiples
 * @n: number
 * @guess: possible multiple
 * Return: 1 if prime, 0 otherwise
 */

int multiple(int n, int guess)
{
	if (n % guess == 0)
		return (0);
	else if ((guess == (n - 1)) && (n % guess != 0))
		return (1);
	else
		return (multiple(n, (guess + 1)));
}
