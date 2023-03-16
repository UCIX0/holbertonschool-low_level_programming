#include "main.h"
/**
 * _strdup - allocates space in memory and copies given string to it
 * @str: string to copy in
 * Return: a pointer to allocated memory / NULL if str = NULL / insufficent mem
 */

char *_strdup(char *str)
{
	int i;
	char *copystr;
	int lentstr;

	if (str == NULL)
	{
		return (NULL);
	}
	lentstr = strlen(str) + 1;
	copystr = malloc(lentstr * sizeof(char));
	if (copystr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < lentstr; i++)
		copystr[i] = str[i];
	return (copystr);
}
