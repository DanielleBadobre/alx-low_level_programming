#include "main.h"
/**
 * create_file - creates file
 * @filename: file to read
 * @text_content: content of file
 * Return: 2 or 0
 */
int create_file(const char *filename, char *text_content)
{
	int file, y;

	if (!filename)
		return (-1);
	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (y = 0; text_content[y] != '\0'; y++)
		;
	write(file, text_content, y);
	close(file);
	return (1);
}
