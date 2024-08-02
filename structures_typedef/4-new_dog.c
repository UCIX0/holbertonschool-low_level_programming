#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a new dog struct and initialize it's values
 * @name: string for dog's name
 * @age: float value for age
 * @owner: string for owner's name
 * Return: pointer to dog_t struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *fido = malloc(sizeof(struct dog));

	if (fido == NULL)
	{
		free(fido);
		return (NULL);
	}

	(*fido).name = _strdup(name);
	if ((*fido).name == NULL)
	{
		free((*fido).name);
		free(fido);
		return (NULL);
	}

	(*fido).owner = _strdup(owner);
	if ((*fido).owner == NULL)
	{
		free(fido->owner);
		free(fido->name);
		free(fido);
		return (NULL);
	}

	(*fido).age = age;

	return (fido);
}
/**
 * _strdup - create a duplicate array of str
 * @str: the string to copy
 * Return: pntr to dup, or NULL if str NULL or insufficient mem
 */
char *_strdup(char *str)
{
	unsigned int size = 0;
	char *arr;

	if (str == NULL)
		return (NULL);

	/* get size of str */
	while (str[size])
		++size;

	/* allocate memory for cpy buffer, size + 1 for NULL byte */
	arr = malloc(sizeof(char) * size + 1);

	if (arr != NULL)
	{
		/* repurpose size */
		size = 0;

		/* copy values over */
		while (str[size])
		{
			arr[size] = str[size];
			++size;
		}
		arr[size] = '\0';
		return (arr);
	}
	else
	{
		free(arr);
		return (NULL);
	}
}
