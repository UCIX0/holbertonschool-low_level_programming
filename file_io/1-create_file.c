#include "main.h"
/**
 * create_file - appends text at the end of a file.
 * @filename: the name of the file to read
 * @text_content: cadena terminada en NULL para agregar al final del archivo
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
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

	/**
	* file = creat(filename, S_IRUSR + S_IWUSR);
	* es lo mismo que
	* file = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR + S_IWUSR);
	*/
	file = creat(filename, S_IRUSR + S_IWUSR);
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
