#include "main.h"
/**
 * _atoi - convert string to integer
 * @s: string to convert
 * Return: integer
 */
int _atoi(char *s)
{
	int i;
	int multiplier = 1;
	int negatigncount = 0;
	int unit = 0;

	if (s == "")
	{return (0); }

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			negatigncount++;
		}
		if (s[i] <= '9' && s[i] >= '0')
		{
			unit++;
			multiplier++;
		}
	}
	return (1);
}
