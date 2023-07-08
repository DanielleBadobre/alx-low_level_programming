#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the name of the program runing
 * @argc: argc
 * @argv: argv
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
