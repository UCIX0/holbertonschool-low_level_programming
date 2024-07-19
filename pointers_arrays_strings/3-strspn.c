#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The string containing the list of characters to match in s.
 *
 * Return: The number of bytes in the initial segment of s which consist only
 *         of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int count = 0;
	int match_found;

	for (i = 0; s[i] != '\0'; i++)
	{
		match_found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				match_found = 1;
				break;
			}
		}
		if (match_found)
		{
			count++;
		}
		else
		{
			break;
		}
	}

	return (count);
}
