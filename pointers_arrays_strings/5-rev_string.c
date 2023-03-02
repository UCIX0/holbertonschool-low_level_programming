#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to reverse
 * lent : length of string
 * o : counter 0
 * temp : temporal variable
 */

void rev_string(char *s)
{
	int lent = 0;
	int o = 0;
	char temp;

	while (s[lent] != '\0')
	{
		lent++;
	}
	for (lent--; lent > o; lent--, o++)
	{
		temp = s[lent];
		s[lent] = s[o];
		s[o] = temp;
	}
}
