#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program that adds 2 numbers
 * @argc: arguments added together to get answer
 * @argv: string of arrays to arguments
 *
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int i;
	int o;
	int suma;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (o = 0; argv[i][o]; o++)
			{
				if (!isdigit(argv[i][o]))
				{
					printf("Error\n");
					return (1);
				}
			}
			suma = suma + atoi(argv[i]);
		}
		printf("%d\n", suma);
	}
	else
	{
		printf("0\n");
		return (0);
	}
	return (0);
}
