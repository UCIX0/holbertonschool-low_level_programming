#include "main.h"

/**
 * main - imprime la información de la cabecera de un archivo ELF.
 * @argc: número de argumentos de la línea de comandos.
 * @argv: matriz de argumentos de la línea de comandos.
 *
 * Return: 0 en caso de éxito, 98 en caso de error.
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf32_Ehdr hdr;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		perror("Error opening file");
		exit(98);
	}

	if (read(fd, &hdr, sizeof(Elf32_Ehdr)) != sizeof(Elf32_Ehdr))
	{
		perror("Error reading ELF header");
		close(fd);
		exit(98);
	}

	if (memcmp(hdr.e_ident, ELFMAG, SELFMAG) != 0)
	{
		fprintf(stderr, "Not an ELF file\n");
		close(fd);
		exit(98);
	}

	display_elf_header(&hdr);
	close(fd);
	return (0);
}

/**
 * display_elf_header - Imprime la información contenida en la cabecera ELF
 * @hdr: puntero a estructura ElfHeader, contiene la información de ELF
 */
void display_elf_header(Elf32_Ehdr *hdr)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		{
		if (i == EI_NIDENT - 1)
		{
			printf("%02x", hdr->e_ident[i]);
		}
		else
		{
			printf("%02x ", hdr->e_ident[i]);
		}
	}
	printf("\n");
	printf("  Class:                             %s\n",
			hdr->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n",
			hdr->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d (current)\n",
			hdr->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            ");
	switch (hdr->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris");
			break;
		default:
			printf("<unknown: %02x>", hdr->e_ident[EI_OSABI]);
			break;
	}
	printf("\n");
	printf("  ABI Version:                       %d\n",
			hdr->e_ident[EI_ABIVERSION]);
	printf("  Type:                              ");
	switch (hdr->e_type)
	{
		case ET_EXEC:
			printf("EXEC (Executable file)");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)");
			break;
	}
	printf("\n");
	printf("  Entry point address:               %#x\n", hdr->e_entry);
}

