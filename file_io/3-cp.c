#include "main.h"
/**
 * copytext - copy text from one file to another
 * @fnamefrom: nombre del archivo a leer
 * @fnameto: nombre del archivo a escribir
 * @ffrom: int del archivo a leer
 * @ffto: int del archivo a escribir
 */
void copytext(const char *fnamefrom, const char *fnameto, int ffrom, int ffto)
{
	ssize_t read_bytes_files_from, write_bytes_file_to;
	char buffer[1024];

	read_bytes_files_from = read(ffrom, buffer, 1024);
		while (read_bytes_files_from != 0)
		{
			if (read_bytes_files_from == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fnamefrom),
				exit(98);
			}

			write_bytes_file_to = write(ffto, buffer, read_bytes_files_from);
			if (write_bytes_file_to != read_bytes_files_from)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fnameto);
				exit(99);
			}
			read_bytes_files_from = read(ffrom, buffer, 1024);
		}
}


/**
 * main - copy text from one file to another
 * @argc: the number of arguments passed the function
 * @argv: array of arguments passed the function as char *
 * Return: 0 on Success, 97 wrong args, 98 no read, 99 no write, 100 no close
 */
int main(int argc, char *argv[])
{
	char *file_name_from = argv[1];
	char *file_name_to = argv[2];
	int f_from, f_to;

	/*read arguments*/
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}


	/*open files*/
	f_from = open(file_name_from, O_RDONLY);
	if (f_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_name_from),
		exit(98);
	}
	f_to = open(file_name_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (f_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name_to);
		exit(99);
	}

	copytext(file_name_from, file_name_to, f_from, f_to);

	/*close files*/
	if (close(f_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_from);
		exit(100);
	}
	if (close(f_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_to);
		exit(100);
	}
	return (0);
}
