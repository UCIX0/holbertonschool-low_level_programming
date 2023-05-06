#include "variadic_functions.h"

/**
* print_strings - prints strings
*@separator: separator
*@n: number of strings
*
*Return: nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list lista;
	unsigned int i;
	char *string;

	va_start(lista, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(lista, char *);
		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}

	}

	printf("\n");
	va_end(lista);
}
