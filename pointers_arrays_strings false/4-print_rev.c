#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * @s: string to print
 */
void print_rev(char *s)
{
	int i;
	int o;

	i = 0;
	while (s[i] != 0)
	{
		i++;
	}
	o = i - 1;
	while (o >= 0)
	{
		_putchar(s[o]);
		o--;
	}
	_putchar('\n');
}
