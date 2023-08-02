#include "main.h"

/**
 * is_prime_number - checks if number is prime
 * @n: number to check
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	else
		return (multiple(n, 2));
}
/**
 * multiple - looks for multiples
 * @n: number's multiles
 * @i: possible multiples
 * Return: 1 or 0
 */
int multiple(int n, int i)
{
	if (i < n && (n % i) == 0)
		return (0);
	else if (i == n)
		return (1);
	else
		return (multiple(n, i + 1));
}
