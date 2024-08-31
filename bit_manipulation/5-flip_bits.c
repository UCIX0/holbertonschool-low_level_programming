#include "main.h"
/**
 * flip_bits - función que devuelva la cantidad de bits
 * @n: Primer valor a comprar
 * @m: Segundo valor a comprar
 * Return: contador
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int contador = 0;
	unsigned long int df = n ^ m;

	for (; df > 0; df &= (df - 1))
	{
		contador++;
	}
	return (contador);
}
