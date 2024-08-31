#include <stdio.h>

/**
 * early_bird - prints string before main
 * Return: void
 */

void __attribute__((constructor)) early_bird()
{
	char *str1 = "You're beat! and yet, you must allow,";
	char *str2 = "\nI bore my house upon my back!\n";

	printf("%s%s", str1, str2);
}
