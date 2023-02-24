#include "main.h"
/**
  * more_numbers - prints 10 times the numbers, from 0 to 14
  *
  * Return: void
  */
void more_numbers(void)
{
	int i;
	int c;
	int l;

	for (l = 0; l < 10; l++)
	{
		c = 48;
		for (i = 0; i < 15; i++)
		{
			if (i == 10)
			{
				c = 48;
			}
			if (i > 9)
			{
				_putchar('1');
			}
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
