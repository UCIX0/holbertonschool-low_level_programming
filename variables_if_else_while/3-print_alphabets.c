#include <stdio.h>

/**
 * main - prints alphabet
 *
 * Return: 0 Always
 */
int main(void)
{

	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}

	for (l = 'A'; l <= 'Z'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
