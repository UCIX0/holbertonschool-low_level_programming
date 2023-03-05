#include "main.h"
/**
 * _strcat - agrega
 * @dest: string1
 * @src: sting2
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int lent_dest = 0;
	int i;
	while (dest[lent_dest])
	{
		lent_dest++;
	}
	for (i = 0; src[i] != '\0'; i++, lent_dest++)
	{
		dest[lent_dest] = src[i];
	}
	return (dest);
}