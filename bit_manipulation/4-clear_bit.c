#include "main.h"
/**
 * clear_bit - función que establece el valor de un bit a 0 en un índice dado
 * @n: el valor para establecer el bit en index
 * @index: el índice del bit a establecer
 * Return: 1 si funcionó, o -1 si ocurrió un error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n &= ~(1 << index);
	return (1);
}
