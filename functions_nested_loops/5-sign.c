#include "main.h"
/**
 * print_sign - imprime el signo
 * @n: variable a chequear
 * Return:  1==letra else - 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
