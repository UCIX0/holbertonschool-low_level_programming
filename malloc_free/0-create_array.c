#include "main.h"
/**
 * *create_array - create an array an initialize it with specific char
 *
 * @size: size of array
 * @c: character of c
 * Return: pointer to array or null
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc(size * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
