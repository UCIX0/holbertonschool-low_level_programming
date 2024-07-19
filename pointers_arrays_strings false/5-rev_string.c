
#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */

void rev_string(char *s)
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
