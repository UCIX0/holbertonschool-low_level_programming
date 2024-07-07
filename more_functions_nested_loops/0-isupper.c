#include "main.h"
/**
 * _isupper - mayuscula
 * @c: variable a chequear
 * Return: 1 == Mayuscula 0==minuscula
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
