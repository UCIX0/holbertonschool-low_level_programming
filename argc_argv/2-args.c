#include <stdio.h>
/**
* main - prints all arguments passed to it
* @argc: arguments passed into it
* @argv: prints arguments in array on newline
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
