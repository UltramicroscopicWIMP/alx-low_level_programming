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
	char str[];

	while (j < 10)
	{
		i = 0;
		while (i < 10)
		{
			compute = i*j;
			str = "\0" + compute;
			printf("%s", str);
			if (i != 9)
			{
				_putchar(',');
			}
			i++;
		}
		_putchar('\n');
		j++;
	}
}
