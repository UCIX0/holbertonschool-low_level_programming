#include "dog.h"
#include "stdlib.h"
#include "stdio.h"
/**
 * print_dog - prints a dog struct
 * @d: pointer the dog struct destination
 * Return: void
 */
void print_dog(struct dog *d)
{
	char *nm, *ow;

	if (d == NULL)
		exit(1);

	if ((*d).name == NULL)
		nm = ("(nil)");
	else
		nm = (*d).name;

	if ((*d).owner == NULL)
		ow = ("(nil)");
	else
		ow = (*d).owner;

	if ((*d).age < 0)
		printf("Name: %s\nAge: (nil)\nOwner: %s\n", nm, ow);
	else
		printf("Name: %s\nAge: %.6f\nOwner: %s\n", nm, d->age, ow);
}
