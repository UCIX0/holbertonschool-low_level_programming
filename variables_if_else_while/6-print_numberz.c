#include <stdio.h>
/**
  * main - 0 to 9 with putchar
  *
  * Return: Always (Success)
  */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
