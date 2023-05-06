#include "variadic_functions.h"
#include <stdarg.h>

/**
*suma_them_all - sum all its parameters
*@n: first parameter
*
*Return: 0 if n is null
* or suma of parameters in other case
*/

int sum_them_all(const unsigned int n, ...)
{

	va_list list;
	int suma = 0;
	unsigned int i;

	va_start(list, n);

	if (n != 0)
	{
	for (i = 0; i < n; i++)
	suma += va_arg(list, int);
	}

	va_end(list);
	return (suma);

}
