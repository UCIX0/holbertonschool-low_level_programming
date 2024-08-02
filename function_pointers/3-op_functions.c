#include "3-calc.h"
/**
 * op_add - add two numbers and return result
 * @a: number to be added
 * @b: number to be added
 * Return: result of a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract two numbers and return result
 * @a: number to be subtracted from
 * @b: number to subtract
 * Return: result of a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply two numbers and return result
 * @a: number to be multiplied
 * @b: number to be multiplied
 * Return: result of a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide two numbers and return result
 * @a: number to be divided
 * @b: divisor
 * Return: result of a / b
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}
/**
 * op_mod - divide two numbers and return remainder
 * @a: number to be divided
 * @b: divisor
 * Return: result of a % b
 */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("Error\n");
	exit(100);
}
