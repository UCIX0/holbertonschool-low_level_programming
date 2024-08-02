#include "function_pointers.h"
/**
 * array_iterator - performs action on values in array to size
 * @array: array of values to enact action on
 * @size: size of the array
 * @action: function to perform on array values
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; ++i)
		{
			action(array[i]);
		}
	}
}
