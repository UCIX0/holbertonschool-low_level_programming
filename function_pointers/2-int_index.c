#include "function_pointers.h"
/**
 * int_index - search array for an integer value
 * @array: array of values to check for integer
 * @size: size of the array
 * @cmp: function to perform comparison of values
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; ++i)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
