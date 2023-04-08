#include "main.h"
/**
 * binary_to_uint - combienrte de binario decimal
 * @b: cadena de caracteres
 * Return: decimal
 */
unsigned int binary_to_uint(const char *b)
{
	int size, decimal = 0, mul = 1;
	unsigned int decimal_retun;

	if (b == NULL)
	{
		return (0);
	}

	for (size = 0; b[size] != '\0'; size++)
	{
		if (b[size] != '0' && b[size] != '1')
		{
			return (0);
		}
	}
	for (--size; size >= 0; size--)
	{
		if (b[size] == '1')
		{
			decimal = decimal + mul;
		}
		mul = mul * 2;
	}
	decimal_retun = decimal;
	return (decimal_retun);
}
