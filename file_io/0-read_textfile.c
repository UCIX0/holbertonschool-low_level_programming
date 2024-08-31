#include "main.h"
/**
 * read_textfile - read "letters" amount of text from a file
 * @filename: the name of the file to read
 * @letters: the number of chars to read from the file
 * Return: 0 on failure, else the number of chars printed to stdout
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, read_bytes_files, write_bytes_file;
	char *buff = malloc(letters);

	if (filename == NULL)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}

	read_bytes_files = read(file, buff, letters);
	if (read_bytes_files == -1)
	{
		return (0);
	}

	write_bytes_file = write(STDOUT_FILENO, buff, read_bytes_files);
	if (write_bytes_file == -1)
	{
		return (0);
	}

	free(buff);
	close(file);
	return (write_bytes_file);
}
