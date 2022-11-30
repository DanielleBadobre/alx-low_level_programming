#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;
	char c;

	n = '0';
	c = 'a';
	while (n <= '9')
	{
		putchar(n);
		++n;
	}
	while (c < 'g')
	{
		putchar(c);
		++c;
	}
	putchar('\n');
	return (0);
}
