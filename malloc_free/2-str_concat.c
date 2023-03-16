#include "main.h"
/**
 * str_concat - concatenates two strings together
 * @s1: string 1
 * @s2: string 2
 *
 *
 * Return: pointer to new concatenated strings
 *
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	char *strconcate;
	int lentstr1, lentstr2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	lentstr1 = strlen(s1);
	lentstr2 = strlen(s2);

	strconcate = malloc((sizeof(char) * (lentstr1 + lentstr2)) + 1);
	if (strconcate == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		strconcate[i] = s1[i];
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		strconcate[i + lentstr1] = s2[i];
	}

	strconcate[lentstr1 + i] = '\0';
	return (strconcate);
}
