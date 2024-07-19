#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string
 */
void puts2(char *str)
{
	int i, o;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	for (o = 0; o < i; o += 2)
	{
		_putchar(str[o]);
	}
	_putchar('\n');
}
