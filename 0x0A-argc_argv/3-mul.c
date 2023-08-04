#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiplies two numbers
 * @argc: arguments count
 * @argv: argument vectorr
 * Return: exit success or 1
 */
int main(int argc, char **argv)
{
	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		exit(EXIT_SUCCESS);
	}
}
