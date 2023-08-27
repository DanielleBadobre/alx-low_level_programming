#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - operates
 * @argc: arg number
 * @argv: arg vector
 * Return: calcul
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*func)(int, int);

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		puts("Error");
		exit(99);
	}
	func = get_op_func(argv[2]);
	if (!func)
	{
		puts("Error");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	result = func(num1, num2);
	printf("%d\n", result);
	return (0);
}
