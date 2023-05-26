#include "search_algos.h"

void print_array(int *array, int start, int end)
{
	printf("Searching in array: ");
	for (int i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i < end)
			printf(", ");
	}
	printf("\n");
}

int binary_search_recursive(int *array, int start, int end, int value)
{
	if (start > end)
	{
		return -1; 
	}

	int mid = start + (end - start) / 2;

	print_array(array, start, end);

	if (array[mid] == value)
	{
		return mid; 
	}
	else if (array[mid] > value)
	{
		return binary_search_recursive(array, start, mid - 1, value); 
	}
	else
	{
		return binary_search_recursive(array, mid + 1, end, value); 
	}
}

int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return binary_search_recursive(array, 0, size - 1, value);
}
