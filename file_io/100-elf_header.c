#include "main.h"
#include <elf.h>
/**
 * main - copy text from one file to another
 * @argc: the number of arguments passed the function
 * @argv: array of arguments passed the function as char *
 * Return: 0 on Success, 98 if not ELF file or error
 */
int main(int argc, char *argv[])
{
	const char *f_mem = NULL;
	char buff[64];
	int fd = -1;
	struct stat info = {0};

	/* may need to handle multiple arguments, for now stick with 1 */
	if (argc != 2)
		return (0);
	/* open the passed executable */
	fd = open(argv[1], O_RDONLY);
	if (fd = -1)
		dprintf(STDERR_FILENO, "Unable to Open %s\n", argv[1]), exit(98);
	/* find the size of the file */
	if (fstat(fd, &info) != 0)
	{
		dprintf(STDERR_FILENO, "Unable to aquire stats for %s\n", argv[1])
		exit(98);
	}
	/* map the file into memory */
	f_mem = mmap(NULL, info.st_size, PROT_READ, MAP_PRIVATE, fd, 0);
	if (f_mem == MAP_FAILED)
		dprintf(STDERR_FILENO, "Unable to map %s\n", argv[1]);

	if (f_mem[0] == 0x7f && f_mem[1] == 'E' && f_mem[2] == 'L' && f_mem[3] == 'F')
	{
		printf("ELF FILE\n");
		p_elf(f_mem);
	}
	else
		dprintf(STDERR_FILENO, "Non-ELF file %s\n", argv[1]), exit(98);

	return (0);
}
int p_elf(f_mem)
{
	if(f_mem[5] == ELFCLASS64)
	/* 64 bit */
	else if (f_mem[5] == ELFCLASS32)
	/* 32 bit  */
}