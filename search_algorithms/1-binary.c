#include <stdio.h>

/**
 * print_array - Print the array being searched
 * @array: array being searched
 * @start: start index
 * @end: end index
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i < end; i++)
	{
		printf("%d", array[i]);
		if (i < end - 1)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - Binary search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index where value is located, or -1 if not found or NULL array
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, mid;
	size_t end = size;

	if (!array)
		return (-1);

	while (start < end)
	{
		print_array(array, start, end);
		mid = (start + end) / 2;
		if (array[mid] < value)
			start = mid + 1;
		else if (array[mid] > value)
			end = mid;
		else
			return mid;
	}

	return (-1);
}
