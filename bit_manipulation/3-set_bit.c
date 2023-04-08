#include "main.h"
/**
 * set_bit - function that returns the number of bits
 * @n: el valor para establecer el bit en index
 * @index: el índice del bit a establecer
 * Return: 1 si funcionó, o -1 si ocurrió un error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n |= (1 << index);
	return (1);
}
