#include <stdio.h>

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

int binary_search(int *array, size_t size, int value)
{
	size_t start = 0;
	size_t mid;
	size_t end = size;

	if (!array)
		return (-1);

	while (start < end)
	{
		print_array(array, start, end);
		mid = start + (end - start) / 2;
		if (array[mid] < value)
			start = mid + 1;
		else if (array[mid] > value)
			end = mid;
		else
			return mid;
	}

	return (-1);
}
