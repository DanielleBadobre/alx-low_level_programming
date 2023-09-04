#include "main.h"
/**
 * read_textfile - reads file
 * @filename: name of file
 * @letters: number of letters to print
 * Return: 2 or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *print_field;
	int file, read_file;

	if (!filename)
		return (0);
	print_field = malloc(letters * sizeof(char));
	if (print_field == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	read_file = read(file, print_field, letters);
	write(STDOUT_FILENO, print_field, read_file);
	close(file);
	free(print_field);
	return (read_file);
}
