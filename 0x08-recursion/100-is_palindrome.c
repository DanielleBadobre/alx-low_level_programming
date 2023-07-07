#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 * Return: 1 if palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	if (palindrome(s, 0, len(s)) == 1)
		return (1);
	else
		return (0);
}

/**
 * palindrome - checks for palindrome
 * @s: string
 * @i: counter
 * @length: string's length
 * Return: 1 or 0
 */

int palindrome(char *s, int i, int length)
{
	if (*(s + i) == *(s + length - 1 - i) && i == (length / 2))
		return (1);
	else if (*(s + i) != *(s + length - 1 - i))
		return (0);
	else
		return (palindrome(s, i + 1, length));
}

/**
 * len - gives length
 * @s: string
 * Return: length
 */

int len(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + len(s + 1));
}
