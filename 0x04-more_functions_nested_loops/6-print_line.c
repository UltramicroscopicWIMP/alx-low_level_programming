#include "main.h"

/**
*print_line - print lines using '-' character
*@n: the number of lines
*
*Return: void. return nothing
*/
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar('_');
		print_line(n - 1);
	}
}
