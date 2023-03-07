#include "main.h"
/**
 * primo- Es primo?
 * @n: varible a testear
 * @x: numero a divdir para ver si es devisor de n
 * Return: 1  or 0
 */
int primo(int n, int x)
{
	if (x == n)
	{
		return (1);
	}
	else if (n % x == 0)
	{
		return (0);
	}
		return (primo(n, x + 1));
}
/**
 * is_prime_number- llama a la verdadera funcion y descarta 0 y 1
 * @n: varible a testear
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	int x = 2;

	if (n <= 1)
	{
		return (0);
	}
	return (primo(n, x));
}
