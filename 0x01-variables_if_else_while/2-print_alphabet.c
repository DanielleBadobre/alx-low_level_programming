#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: Always return 0 (success)
 */

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		++c;
	}
	putchar('\n');
	return (0);
}
