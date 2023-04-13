#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
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

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
