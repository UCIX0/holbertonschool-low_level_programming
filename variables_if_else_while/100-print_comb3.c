#include <stdio.h>
/**
  * main - print all possible different combinations of two digits
  *
  * Return: 0 Always
  */

int main(void)
{
	int a;
	int b;

	for (a = '0'; a <= '8'; a++)
	{
		for (b = '1'; b <= '9'; b++)
		{
			if (a < b)
			{
				putchar(a);
				putchar(b);
				if (a != '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
