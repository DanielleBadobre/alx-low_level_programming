#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the number of arguments
 * @argc: number of arguments
 * @argv: argument vector
 * Return: exit status
 */
int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}
