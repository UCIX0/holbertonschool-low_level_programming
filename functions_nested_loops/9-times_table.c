#include "main.h"
/**
  * times_table - multiplicas
  *
  * Return: void
  */
void times_table(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; a++)
	{
		putchar('0');
		for (b = 1; b <= 9; b++)
		{
			c = a * b;
			putchar(',');
			putchar(' ');
			if (c <= 9)
			{
				putchar(' ');
		}
			else
			{
				putchar((c / 10) + '0');
			}
			putchar((c % 10) + '0');
		}
		putchar('\n');
	}
}
