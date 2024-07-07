#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit - ultomo digito absoluto
 * @n: variable a chequear
 * Return: Always n
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = abs(n);
	}
	n = n % 10;
	if (n < 0)
	{
		n = abs(n);
	}
	_putchar('0' + n);
	return (n);
}
