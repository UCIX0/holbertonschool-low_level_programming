#include "main.h"
/**
 * swap_int - Write a function that swaps the values of two integers.
 * @a : puntero a
 * @b : puntero b
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
