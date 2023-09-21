#include "main.h"
#include <stdio.h>
/**
 * main - copy file
 * @argc: counter
 * @argv: vector
 * Return: 1 or 0
 */
int main(int argc, char **argv)
{
	int file_from, file_to;
	unsigned long int taille;
	char *conteneur;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp src file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[0]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
		exit(99);
	}
	conteneur = malloc(1024);
	while ((taille = read(file_from, conteneur, sizeof(conteneur))) != 0)
		write(file_to, conteneur, taille);
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(99);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(99);
	}
	free(conteneur);
	return (0);
}
