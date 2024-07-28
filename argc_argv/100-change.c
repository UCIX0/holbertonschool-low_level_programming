#include <stdio.h>
#include <stdlib.h>
/**
 * main - min number of coin change
 * @argc: argv length
 * @argv: array
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int coins[5] = {25, 10, 5, 2, 1};
		int num = atoi(argv[1]), sum = 0, i;

		if (num < 0)
			printf("0\n");
		else
		{
			for (i = 0; i <= 4; i++)
			{
				sum += num / coins[i];
				num = num % coins[i];
			}
			printf("%d\n", sum);
		}
		return (0);
	}
	printf("Error\n");
	return (1);
}
