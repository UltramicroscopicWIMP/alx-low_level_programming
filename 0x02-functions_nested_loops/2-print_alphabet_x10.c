#include "main.h"

/**
*print_alphabet_x10 - prints the alphabet 10 times
*
*Return: void
*/
void print_alphabet_x10(void)
{
	int j = 0;
	int i;

	while (j < 10)
	{
		i = 0;
		while (i < 26)
		{
			_putchar(97 + i);
			i++;
		}
		_putchar('\n');
		j++;
	}
}
