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
		return (NULL);
	i = 0;
	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
