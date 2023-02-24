#include "main.h"
/**
  * print_diagonal - draws a diagonal line on the termina
  *	@n: el numero de lineas
  * Return: void
  */
void print_diagonal(int n)
{
	int i;
	int l;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (l = 0; l != i; l++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
