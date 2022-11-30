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

	n = '0';
	while (n <= '9')
	{
		putchar(n);
		if (n < '9')
		{
			putchar(',');
			putchar(' ');
		}
		++n;
	}
	putchar('\n');
	return (0);
}
