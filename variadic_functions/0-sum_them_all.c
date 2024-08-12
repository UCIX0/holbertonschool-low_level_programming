#include "variadic_functions.h"
/**
 * sum_them_all - sum a variable amount of given values
 * @n: the identifier for the arguements
 * Return: the sum of all the variables
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list num;

	if (n == 0)
	{
		return (0);
	}
	va_start(num, n);
	for (i = 0; i < n; ++i)
	{
		sum += va_arg(num, int);
	}
	va_end(num);
	return (sum);
}
