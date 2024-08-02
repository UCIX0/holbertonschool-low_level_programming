#include "function_pointers.h"
/**
 * print_name - print the name using the provided function
 * @name: string to print
 * @f: function to call to enact the printing
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
