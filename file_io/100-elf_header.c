#include "main.h"

void print_elf_header(const ElfHeader *header)
{
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (int i = 0; i < 16; ++i)
	{
		printf("%02x ", header->magic[i]);
	}
	printf("\n");
	printf("  Class:                             %s\n",
			header->class == 1 ? "ELF32" : "ELF64");
	printf("  Data:                              2's complement, %s endian\n",
			header->data == 1 ? "little" : "big");
	printf("  Version:                           %u (current)\n",
	header->version);
	printf("  OS/ABI:                            %s\n",
			header->osabi == 0 ? "UNIX - System V" :
			header->osabi == 2 ? "UNIX - NetBSD" :
			header->osabi == 6 ? "UNIX - Solaris" :
			"<unknown>");
	printf("  ABI Version:                       %u\n", header->abiversion);
	printf("  Type:                              %s (Executable file)\n",
			header->type == 2 ? "EXEC" : "DYN");
	printf("  Entry point address:               0x%lx\n", header->entry);
}

int read_elf_header(const char *filename, ElfHeader *header)
{
	int fd = open(filename, O_RDONLY);

	if (fd < 0)
	{
		return (-1);
	}

	ssize_t bytes_read = read(fd, header, sizeof(ElfHeader));


	if (bytes_read != sizeof(ElfHeader)
		|| memcmp(header->magic,
			"\x7F ELF",
				4) != 0)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (0);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	ElfHeader header;

	if (read_elf_header(argv[1], &header) != 0)
	{
		fprintf(stderr,
		"Error: Not an ELF file or failed to read the ELF header: %s\n",
		strerror(errno));
		exit(98);
	}

	print_elf_header(&header);
	return (0);
}
