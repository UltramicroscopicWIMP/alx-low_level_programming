#include "main.h"
#include <stdio.h>

/**
*times_table - print the multiplication times table
*
*Return: Void.
*/
void times_table(void)
{
	int i;
	int j = 0;
	int compute;

	while (j < 10)
	{
		i = 0;
		while (i < 10)
		{
			compute = i * j;
			printf("%d", compute);
			if (i != 9)
			{
				printf(", ");
			}
			i++;
		}
		printf("\n");
		j++;
	}
}
