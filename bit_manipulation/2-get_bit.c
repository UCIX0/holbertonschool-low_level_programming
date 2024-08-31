#include "main.h"
/**
 * get_bit - función que devuelva el valor de un bit en un índice dado
 * @n: el valor para examinar el bit
 * @index: el índice del bit a comprobar
 * Return: el valor del bit o -1 si se produjo un error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	return (1 & (n >> index));
}
