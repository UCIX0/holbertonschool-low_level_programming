#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - ultomo digito absoluto
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			if (h < 10)
			{
				printf("0%d", h);
			}
			else
			{
				printf("%d", h);
			}
			printf(":");
			if (m < 10)
			{
				printf("0%d", m);
			}
			else
			{
				printf("%d", m);
			}
			printf("\n");
		}
	}
}
