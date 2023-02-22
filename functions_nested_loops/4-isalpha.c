#include "main.h"
/**
 * _isalpha - letra
 * @c: variable a chequear
 * Return:  1==letra else - 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
