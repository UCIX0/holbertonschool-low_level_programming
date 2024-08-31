#include "main.h"
/**
 * append_text_to_file - append text to the specified file
 * @filename: the name of the file to append text to
 * @text_content: the string to append to the file
 * Return: 1 on success, else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t file, write_bytes_file;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}

	file = open(filename, O_RDWR | O_APPEND);
	if (file == -1)
	{
		return (-1);
	}

	write_bytes_file = write(file, text_content, strlen(text_content));
	if (write_bytes_file == -1)
	{
		return (-1);
	}
	close(file);
	return (1);
}
