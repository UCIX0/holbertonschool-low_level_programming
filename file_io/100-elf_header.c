#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <errno.h>

typedef struct {
	uint8_t ei_magic[4];
	uint8_t ei_class;
	uint8_t ei_data;
	uint8_t ei_version;
	uint8_t ei_osabi;
	uint8_t ei_abiversion;
	uint8_t ei_pad[7];
} Elf_Ident;

typedef struct {
	uint16_t e_type;
	uint16_t e_machine;
	uint32_t e_version;
	uint64_t e_entry;
} Elf_Header;

static const char *get_class_str(uint8_t ei_class) {
	switch (ei_class) {
		case 1: return "ELF32";
		case 2: return "ELF64";
		default: return "<unknown>";
	}
}

static const char *get_data_str(uint8_t ei_data) {
	switch (ei_data) {
		case 1: return "2's complement, little endian";
		case 2: return "2's complement, big endian";
		default: return "<unknown>";
	}
}

static const char *get_osabi_str(uint8_t ei_osabi) {
	switch (ei_osabi) {
		case 0: return "UNIX - System V";
		case 2: return "UNIX - NetBSD";
		case 6: return "UNIX - Solaris";
		default: return "<unknown>";
	}
}

static const char *get_type_str(uint16_t e_type) {
	switch (e_type) {
		case 2: return "EXEC (Executable file)";
		case 3: return "DYN (Shared object file)";
		default: return "<unknown>";
	}
}

void print_elf_header(const Elf_Ident *ident, const Elf_Header *header) {
	int i;
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < 16; i++) {
		printf("%02x ", ((uint8_t *)ident)[i]);
	}
	printf("\n");
	printf("  Class:                             %s\n", get_class_str(ident->ei_class));
	printf("  Data:                              %s\n", get_data_str(ident->ei_data));
	printf("  Version:                           %u (current)\n", ident->ei_version);
	printf("  OS/ABI:                            %s\n", get_osabi_str(ident->ei_osabi));
	printf("  ABI Version:                       %u\n", ident->ei_abiversion);
	printf("  Type:                              %s\n", get_type_str(header->e_type));
	printf("  Entry point address:               %#llx\n", (unsigned long long)header->e_entry);
}

int main(int argc, char **argv) {
	int fd;
	ssize_t ident_bytes_read;
	Elf_Ident ident;
	Elf_Header header;

	if (argc != 2) {
		fprintf(stderr, "Usage: elf_header elf_filename\n");
		return 98;
	}

	fd = open(argv[1], O_RDONLY);
	if (fd < 0) {
		fprintf(stderr, "Error opening file '%s': %s\n", argv[1], strerror(errno));
		return 98;
	}

	ident_bytes_read = read(fd, &ident, sizeof(ident));
	if (ident_bytes_read != sizeof(ident)) {
		fprintf(stderr, "Error reading ELF ident from file '%s': %s\n", argv[1], strerror(errno));
		close(fd);
		return 98;
	}

	if (memcmp(ident.ei_magic, "\x7F" "ELF", 4) != 0) {
		fprintf(stderr, "File '%s' is not an ELF file\n", argv[1]);
		close(fd);
		return 98;
	}

	if (lseek(fd, sizeof(ident), SEEK_SET) < 0) {
		fprintf(stderr, "Error seeking in file '%s': %s\n", argv[1], strerror(errno));
		close(fd);
		return 98;
	}

	ssize_t header_bytes_read = read(fd, &header, sizeof(header));
	if (header_bytes_read != sizeof(header)) {
		fprintf(stderr, "Error reading ELF header from file '%s': %s\n", argv[1], strerror(errno));
		close(fd);
		return 98;
	}

	print_elf_header(&ident, &header);
	close(fd);

	return 0;
}
