#include "main.h"

/**
*_puts - prints out an array of chars
*@str: an array of chars
*
*Return: Void. Returns nothing
*/
void _puts(char *str)
{
	char c = *str;
	int count = 0;

	while (c != '\0')
	{

		count++;
		_putchar('\0' + c);
		c = *(str + count);
	}
	_putchar ('\n');
}
