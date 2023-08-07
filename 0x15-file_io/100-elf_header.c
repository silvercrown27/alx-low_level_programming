#include "main.h"
#include <elf.h>
#include <string.h>

/**
 * display_elf_header - function that displays the information
 * contained in the ELF header at the start of an ELF file
 * 
 * @filename: elf header file
 * 
 * Return: No value
 */
void display_elf_header(const char *filename)
{
	int fd, i;
	Elf64_Ehdr header;

	fd = open(filename, O_RDONLY);
	if (fd == -1) {
		fprintf(stderr, "Error opening file: %s\n", filename);
		exit(98);
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		fprintf(stderr, "Error reading ELF header\n");
		close(fd);
		exit(98);
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 || 
			header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Not an ELF file: %s\n", filename);
		close(fd);
		exit(98);
	}

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header.e_ident[i]);

	printf("\n");
	printf("  Class:                             ");
	switch (header.e_ident[EI_CLASS])
	{
		case ELFCLASS32: printf("ELF32\n"); break;
		case ELFCLASS64: printf("ELF64\n"); break;
		default: printf("<unknown>\n"); break;
	}
	printf("  Data:                              ");
	switch (header.e_ident[EI_DATA])
	{
		case ELFDATA2LSB: printf("2's complement, little endian\n"); break;
		case ELFDATA2MSB: printf("2's complement, big endian\n"); break;
		default: printf("<unknown>\n"); break;
	}
	printf("  Version:                           %d (current)\n", header.e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %s\n", "<unknown>");
	printf("  ABI Version:                       %d\n", header.e_ident[EI_ABIVERSION]);
	printf("  Type:                              ");
	switch (header.e_type)
	{
		case ET_NONE: printf("NONE (Unknown type)\n"); break;
		case ET_REL: printf("REL (Relocatable file)\n"); break;
		case ET_EXEC: printf("EXEC (Executable file)\n"); break;
		case ET_DYN: printf("DYN (Shared object file)\n"); break;
		case ET_CORE: printf("CORE (Core file)\n"); break;
		default: printf("<unknown>\n"); break;
	}
	printf("  Entry point address:               0x%lx\n", (unsigned long)header.e_entry);

	close(fd);
}

/**
 * main - function that checks the code
 * 
 * argc: Number of args
 * argv: arguments
 * 
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	display_elf_header(argv[1]);

	return (0);
}
