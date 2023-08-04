#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints all argumets
 * @argc: argument count
 * @argv: argument vector
 * Return: exit status
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	exit(EXIT_SUCCESS);
}
