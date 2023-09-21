#include "main.h"
/**
 * append_text_to_file - literally
 * @filename: file in question
 * @text_content: text to append
 * Return: 0 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, y;

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
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
