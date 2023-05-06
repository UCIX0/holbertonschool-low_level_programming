#include <stdio.h>
#include <stdlib.h>

/**
*main -  program that prints the codeops of its own main function.
*@argc: number of arguments passed to the program
*@argv: array of arguments
*
*Return: on success, 1 or 2 in case of failure
*/

int main(int argc, char *argv[])
{

	int indice, bts;
	int (*direcc)(int, char **) = main;
	unsigned char codeop;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bts = atoi(argv[1]);

	if (bts < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (indice = 0; indice <  bts; indice++)
	{
		codeop = *(unsigned char *)direcc;
		printf("%.2x", codeop);

		if (indice == bts - 1)
		continue;
		printf(" ");
		direcc++;
	}
	printf("\n");
	return (0);
}
