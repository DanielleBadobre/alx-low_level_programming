#include <stdio.h>
#include <stdlib.h>
/**
 * m - stores 3 int in memory and prints the sum
 * @n0: int to store
 * @n1: int to store
 * @n2: int to store
 * Return: nothing
 */
void m(int n0, int n1, int n2)
{
	int *t;
	int sum;

	t = malloc(sizeof(*t) * 3);
	t[0] = n0;
	t[1] = n1;
	t[2] = n2;
	sum = t[0] + t[1] + t[2];
	printf("%d + %d + %d = %d\n", t[0], t[1], t[2], sum);
}

/**
 * main - intro to malloc
 * Return: 0.
 */
int main(void)
{
	m(98, 402, -1024);
	return (0);
}
