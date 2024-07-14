#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src
 * @dest : pointer  buffer
 * @src : string
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, o;

	i = 0;
	while (src[i] != 0)
	{
		i++;
	}
	for (o = 0; o < i; o++)
	{
		dest[o] = src[o];
	}
	dest[o] = 0;
	return (dest);
}
