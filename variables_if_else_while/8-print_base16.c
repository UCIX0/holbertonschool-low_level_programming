#include <stdio.h>
/**
  * main - hexadecimal
  *
  * Return: Always (Success)
  */
int main(void)
{
	char n, l;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	for (l = 'a'; l <= 'f'; l++)
	{
		putchar(l);
	}

	putchar('\n');

	return (0);
}
