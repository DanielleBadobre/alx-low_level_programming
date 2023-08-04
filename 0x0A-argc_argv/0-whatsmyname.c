#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the name of the program
 * @argc: argument count
 * @argv: argument vector
 * Return: success or failure convention
 */
int main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", argv[0]);
	exit(EXIT_SUCCESS);
}
