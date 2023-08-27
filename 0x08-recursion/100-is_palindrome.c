#include "main.h"
/**
 * s_len - calculates length
 * @s: string
 * Return: length
 */
int s_len(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + s_len(s + 1));
}
/**
 * pal - checks
 * @s: string
 * @i: point
 * @len: length
 * Return: 1 or 0
 */
int pal(char *s, int i, int len)
{
	if (s[i] == *(s + len - 1 - i) && i == len / 2)
		return (1);
	else if (s[i] != *(s + len - 1 - i))
		return (0);
	else
		return (pal(s, i + 1, len));
}
/**
 * is_palindrome - check if pal
 * @s: string
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	if (pal(s, 0, s_len(s)) == 1)
		return (1);
	else
		return (0);
}
