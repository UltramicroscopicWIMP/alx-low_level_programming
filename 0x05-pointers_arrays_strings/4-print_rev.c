#include "main.h"

/**
*print_rev - prints an array of chars in reverse
*@s: an array of chars
*
*Return: Void. Returns nothing
*/
void print_rev(char *s)
{
	int i;
	char c = *s;
	int count = 0;

	while (c != '\0')
	{
		count++;
		c = *(s + count);
	}

	for (i = count-1; i >= 0; i--)
	{
	_putchar('\0' + (*(s + i)));
	}
	_putchar('\n');
}

