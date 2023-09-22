#include "main.h"
/**
 * check_open - verifies if fie can ne opened
 * @argv: vector
 * @file_to: dest
 * @file_from: source
 */
void check_open(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - copies file
 * @argc: counter
 * @argv: vector
 * Return: 0 bruf
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, close_err;
	ssize_t numchar, nvm;
	char cont[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_APPEND, 0664);
	check_open(file_from, file_to, argv);
	numchar = 1024;
	while (numchar == 1024)
	{
		numchar = read(file_from, cont, 1024);
		if (numchar == -1)
			check_open(-1, 0, argv);
		nvm = write(file_to, cont, numchar);
		if (nvm == -1)
			check_open(0, -1, argv);
	}
	close_err = close(file_from);
	if (close_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	close_err = close(file_to);
	if (close_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
