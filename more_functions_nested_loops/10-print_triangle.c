#include "main.h"
/**
  * print_triangle - prints Triangles
  * @size: espacios nuemros
  * Return: void
  */
void print_triangle(int size)
{
	int draw;
	int space;
	int height;

	if (size > 0)
	{
		for (height = 1; height <= size ; height++)
		{
			for (space = 0; space < (size - height); space++)
			{
				_putchar(' ');
			}
			for (draw = 0; draw < height; draw++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
