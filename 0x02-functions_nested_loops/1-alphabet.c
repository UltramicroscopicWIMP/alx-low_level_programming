#include "main.h"

/**
*print_alphabet - prints the alphabet in lowercase followed by the newline
*
*Return: Void. returns nothing
*/
void print_alphabet(void)
{
	int i = 0;

	while (i < 26)
	{
		_putchar(97+i);
		i++;
	}
	 _putchar('\n');
}
