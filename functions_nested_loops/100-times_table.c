#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the number for the times table
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int product = i * j;

			if (j > 0)
			{
				putchar(',');
				putchar(' ');
				if (product < 100)
					putchar(' ');
				if (product < 10)
					putchar(' ');
			}
			if (product >= 100)
			{
				putchar((product / 100) + '0');
				putchar(((product / 10) % 10) + '0');
				putchar((product % 10) + '0');
			}
			else if (product >= 10)
			{
				putchar((product / 10) + '0');
				putchar((product % 10) + '0');
			}
			else
			{
				putchar(product + '0');
			}
		}
		putchar('\n');
	}
}
