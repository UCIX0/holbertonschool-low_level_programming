#include "main.h"
/**
 * square_root - funcion verdadera ya que no pude hacerlo en una sola funcion
 * @x: numero a probar la funcion
 * @n: variable a testear
 *
 * Return: raiz
 */
int square_root(int x, int n)
{
	if (x * x == n)
	{
		return (x);
	}
	if (x * x > n)
	{
		return (-1);
	}
	return (square_root(x + 1, n));
}

/**
 * _sqrt_recursion - retorna raiz a main y llama a la verdedera funcion
 * @n: variable a testear
 * Return: raiz
 */

int _sqrt_recursion(int n)
{
	int x;

	x = 1;
	return (square_root(x, n));
}
