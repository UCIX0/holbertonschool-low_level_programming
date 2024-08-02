#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free the memory allocated to a dog struct
 * @d: pointer to a dog struct
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free((*d).owner);
		free((*d).name);
		free(d);
	}
}
