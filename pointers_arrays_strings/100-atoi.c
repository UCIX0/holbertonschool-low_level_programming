#include "main.h"
/**
 * _atoi - convert string to integer
 * @s: string to convert
 * Return: integer
 */
int _atoi(char *s)
{
	int i;
	int multiplier = 10;
	int negatigncount = 0;
	int num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			negatigncount++;
		}
		if (s[i] <= '9' && s[i] >= '0')
		{
			num = (num * multiplier) + (s[i] - 48);
			if (s[i + 1] > '9' ||  s[i + 1] < '0')
			{
				break;
			}
		}
	}
	if (negatigncount % 2 != 0)
	{
		num = num * -1;
	}
	return (num);
}
