#include "main.h"
/**
 *  alloc_grid - prints a grid of integers
 * Description: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the allocated array.
 */
int **alloc_grid(int width, int height)
{
	int heig, wid, i;
	int **arr;

	if (width < 1 || height < 1)
		return (NULL);

	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (i = 0; i < height; i++)
			{
				free(arr[i]);
			}
			free(arr);
			return (NULL);
		}
	}

	for (heig = 0; heig < height; heig++)
		for (wid = 0; wid < width; wid++)
		{
			arr[heig][wid] = 0;
		}

	return (arr);
}
