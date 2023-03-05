#include "main.h"
/**
 * _strncat - agrega
 * @dest: string1
 * @src: sting2
 * @n: n bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int lent_dest = 0;
	int i;

	while (dest[lent_dest])
	{
		lent_dest++;
	}
	for (i = 0; src[i] != '\0' && n > 0; i++, lent_dest++, n--)
	{
		dest[lent_dest] = src[i];
	}
	return (dest);
}
