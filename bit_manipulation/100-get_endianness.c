#include "main.h"
/**
 * get_endianness - función que comprueba el endianness
 * Return: 0 si es big endian, 1 si es little endian
 */
int get_endianness(void)
{
	unsigned int val = 10;

	val >>= 1;

	return (1 & val);
}
