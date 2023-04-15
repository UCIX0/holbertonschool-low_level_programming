#include "main.h"
/**
 * main - read and display ELF header info
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 on success, exit on error
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
 * display_magic - display ELF magic bytes
 * @hdr: ELF header
 */
void display_magic(Elf32_Ehdr *hdr)
{
	int i;

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
}
/**
 * display_class_data_version - show ELF class, data, and version
 * @hdr: ELF header
 */
void display_class_data_version(Elf32_Ehdr *hdr)
{
	printf("  Class:                             %s\n",
		hdr->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n",
		hdr->e_ident[EI_DATA] == ELFDATA2LSB ?
		"2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d%s\n",
		hdr->e_ident[EI_VERSION],
		hdr->e_ident[EI_VERSION] == EV_CURRENT ? " (current)" : "");
}
/**
 * display_os_abi - show ELF OS/ABI and version
 * @hdr: ELF header
 */
void display_os_abi(Elf32_Ehdr *hdr)
{
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
}
/**
 * display_type_entry - show ELF type and entry point
 * @hdr: ELF header
 */
void display_type_entry(Elf32_Ehdr *hdr)
{
	printf("  Type:                              ");
	switch (hdr->e_type)
	{
		case ET_EXEC:
			printf("EXEC (Executable file)");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)");
			break;
		default:
			if (hdr->e_ident[EI_DATA] == ELFDATA2MSB && hdr->e_type == ET_EXEC)
			{
				printf("EXEC (Executable file)");
			}
			else
			{
				printf("UNKNOWN");
			}
			break;
	}
	printf("\n");
	printf("  Entry point address:               %#x\n", hdr->e_entry);
}
/**
 * display_elf_header - display all ELF header info
 * @hdr: ELF header
 */
void display_elf_header(Elf32_Ehdr *hdr)
{
	printf("ELF Header:\n");
	display_magic(hdr);
	display_class_data_version(hdr);
	display_os_abi(hdr);
	display_type_entry(hdr);
}
