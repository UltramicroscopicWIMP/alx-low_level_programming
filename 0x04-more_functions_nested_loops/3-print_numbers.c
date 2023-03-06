#include "main.h"

/**
*print_numbers - print numbers from 0 to 9 followed by \n
*
*Return: Void. returns nothing
*/
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}

