#include "main.h"
/**
 * print_binary - convierte de decimal a binario
 * @n: decimal
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
