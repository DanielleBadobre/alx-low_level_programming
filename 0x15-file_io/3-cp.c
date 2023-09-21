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
	int src, dest;
	unsigned long int taille;
	char *conteneur;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp src dest\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	if (src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[0]);
		exit(98);
	}
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
		exit(99);
	}
	conteneur = malloc(1024);
	while ((taille = read(src, conteneur, sizeof(conteneur))) != 0)
		write(dest, conteneur, taille);
	if (close(src) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src);
		exit(99);
	}
	if (close(dest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest);
		exit(99);
	}
	free(conteneur);
	return (0);
}
