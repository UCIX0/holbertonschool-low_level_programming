#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - Prints the result of simple operations.
* @argc: The number of arguments supplied to the program.
* @argv: An array of pointers to the arguments.
*
* Return: Always 0.
*/

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int numero, numero2;
	char *operador;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	numero = atoi(argv[1]);
	operador = argv[2];
	numero2 = atoi(argv[3]);

	if (get_op_func(operador) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operador == '/' && numero2 == 0) || (*operador == '%' && numero2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(operador)(numero, numero2));
	return (0);
}
