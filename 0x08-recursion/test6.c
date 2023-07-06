#include <stdio.h>
unsigned int sumdigit(unsigned int n)
{
	if (n == 0)
		return (0);
	return ((n % 10) + (n / 10));
}

int main(void)
{
	printf("%d\n", sumdigit(53));
	return (0);
}
