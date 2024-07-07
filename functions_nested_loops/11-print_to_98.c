#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - 98 magico
 * @n: numero
 * Return: void
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%i, ", n--);
		}
		printf("%i\n", n);
	}
	else
	{
		while (n < 98)
		{
			printf("%i, ", n++);
		}
		printf("%i\n", n);
	}
}
