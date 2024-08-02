#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Prints the opcodes of the print_opcodes function.
 * @n: The number of bytes to print.
 *
 * This function prints the first n bytes of the function's opcodes in
 * hexadecimal format, each opcode being two characters long and separated
 * by a space.
 */
void print_opcodes(int n)
{
	unsigned char *main_ptr = (unsigned char *)print_opcodes;
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%02x", main_ptr[i]);
		if (i < n - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line arguments.
 *
 * This function checks if the correct number of arguments is provided,
 * converts the argument to an integer, and calls the print_opcodes function
 * with the given number of bytes. If the number of arguments is incorrect,
 * it prints an error message and exits with status 1. If the number of bytes
 * is negative, it prints an error message and exits with status 2.
 *
 * Return: 0 on success, 1 if the number of arguments is incorrect, 2 if the
 *         number of bytes is negative.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes(num_bytes);

	return (0);
}
