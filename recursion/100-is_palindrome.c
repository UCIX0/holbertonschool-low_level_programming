#include "main.h"

/**
 * is_palindrome- is a palindrome?
 * @s: string
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int lent = 0;
	int o = 0;
	int io;

	lent = lentf(s, lent);
	io = comparar(s, lent - 1, o);
	return (io);
}

/**
 * lentf- lent string
 * @s: string
 * @lent: var lent 0
 * Return: lent of string
 */
int lentf(char *s, int lent)
{
	if (s[lent] != '\0')
	{
		lent++;
		lent = lentf(s, lent);
	}
	return (lent);
}

/**
 * comparar- compara string
 * @s: string
 * @lent: lent of string
 * @o: var 0
 * Return: 0 or 1
 */
int comparar(char *s, int lent, int o)
{
	int iof;

	if (s[lent] == s[o])
	{
		iof = 1;
	}
	else
	{
		iof = 0;
	}
	if (lent > o)
	{
		lent--;
		o++;
		iof = comparar(s, lent, o);
	}
	return (iof);
}
