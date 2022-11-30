#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;
	char C;

	c = 'a';
	C = 'A';
	while (c <= 'z')
	{
		putchar(c);
		++c;
	}
	while (C <= 'Z')
	{
		putchar(C);
		++C;
	}
	putchar('\n');
	return (0);
}
