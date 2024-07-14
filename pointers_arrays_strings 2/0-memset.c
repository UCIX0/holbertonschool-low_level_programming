#include "main.h"
/**
 * _memset - Write a function that fills memory with a constant byte.
 *
 * @s: string a llenar con b
 * @b: Sting que llena n s
 * @n: numero de veces que se escribe
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
return (s);
}
