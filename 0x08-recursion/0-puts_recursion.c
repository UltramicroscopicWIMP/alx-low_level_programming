#include "main.h"

/**
*_puts_recursion  - prints a string followed by a new line
*@s: a string to be printed recursively
*
*Return: void. Returns nothing
*/
void _puts_recursion(char *s)
{
	char *ch = s;
	_putchar(*ch);

	if (*ch != '\0')
	{
		s += 1;
		_puts_recursion(s);
	}
}
