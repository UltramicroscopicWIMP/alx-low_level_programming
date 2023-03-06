#include "main.h"

/**
*more_numbers - prints all numbers from 0 to 14 ten times
*
*Return: Void. Returns nothing
*/
void more_numbers(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		j = 0;
		while (j < 15)
		{
			_putchar('0' + j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
